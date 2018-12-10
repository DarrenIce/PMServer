#include "server.h"


#define SER_PORT 4396
#define SQL_SIZE 500
#define MAXCONNECT 5
using namespace std;
CInitSock initSock;

void Server::connect_database()
{
	rc = sqlite3_open("pokemon.db", &db);

	if (rc)
	{
		fprintf(stderr, "Can't open database:%s\n", sqlite3_errmsg(db));
		system("pause");
		exit(0);
	}
	else
	{
		fprintf(stderr, "Opened database successfully\n");
	}
}
void Server::create_usertable()
{
	char* sql = "CREATE TABLE IF NOT EXISTS user_table(\
				ID integer PRIMARY KEY AUTOINCREMENT,\
				NAME TEXT NOT NULL UNIQUE,\
				PASSWORD TEXT NOT NULL,\
				ONLINE INTEGER NOT NULL,\
				WINNUM INTEGER NOT NULL,\
				LOSSNUM INTEGER NOT NULL,\
				PMNUM INTEGER NOT NULL,\
				FULLLEVEL INTEGER NOT NULL);";
	rc = sqlite3_exec(db, sql, NULL, NULL, &zErrMsg);
	if (rc != SQLITE_OK)
	{
		fprintf(stderr, "SQL error: %s\n", zErrMsg);
		sqlite3_free(zErrMsg);
	}
	else
	{
		fprintf(stdout, "Table1 created successfully\n");
	}
}
void Server::sign_up(SOCKET sockClient)
{
	Info signup;
	string username;
	string password;
	string send_buf;
	char b[10] = "1";
	::send(sockClient, b, sizeof(b), 0);
	::recv(sockClient, (char*)&signup, sizeof(Info), 0);
	username = signup.username;
	password = signup.password;
	/*send_buf = "1";
	send(sockClient);
	int rev = ::recv(sockClient, buffer, BUF_SIZE, 0);
	buffer[rev] = '\0';
	username = buffer;
	while (!username_valid(username))
	{
		send_buf = "2";
		send(sockClient);
		rev = ::recv(sockClient, buffer, BUF_SIZE, 0);
		buffer[rev] = '\0';
		username = buffer;
	}
	send_buf = "3";
	send(sockClient);
	rev = ::recv(sockClient, buffer, BUF_SIZE, 0);
	buffer[rev] = '\0';
	password = buffer;
	while (!password_valid(password))
	{
		send_buf = "4";
		send(sockClient);
		rev = ::recv(sockClient, buffer, BUF_SIZE, 0);
		buffer[rev] = '\0';
		password = buffer;
	}*/
	char sql[SQL_SIZE];
	sprintf_s(sql, "insert into user_table (NAME,PASSWORD,ONLINE,WINNUM,LOSSNUM,PMNUM,FULLLEVEL)values('%s','%s',0,0,0,0,0);", username.c_str(), password.c_str());
	rc = sqlite3_exec(db, sql, NULL, NULL, &zErrMsg);
	if (rc != SQLITE_OK)
	{
		fprintf(stderr, "SQL error:%s\n", zErrMsg);
		sqlite3_free(zErrMsg);
		send_buf = "2";
		::send(sockClient, send_buf.c_str(), send_buf.size(), 0);
	}
	else
	{
		send_buf = "1";
		::send(sockClient, send_buf.c_str(), send_buf.size(), 0);
	}
}
int Server::username_valid(string str)//字母开头，允许 5~16 字节，允许字母数字下划线
{
	if (str.length() > 16)
		return 0;
	else
	{
		regex repPattern("^[a-zA-Z][a-zA-Z0-9_]{4,15}$");
		if (regex_match(str, repPattern))
			return 1;
		else
			return 0;
	}
}
int Server::password_valid(string str)//必须包含大小写字母和数字的组合，不能使用特殊字符，长度在 8~16 之间
{
	if (str.length() > 16)
		return 0;
	else
	{
		regex repPattern("^(?![0-9]+$)(?![a-zA-Z]+$)[0-9A-Za-z]{8,15}$");
		if (regex_match(str, repPattern))
			return 1;
		else
			return 0;
	}
}
string Server::login(SOCKET sockClient)
{
	Info login;
	UserInfo userinfo;
	CallBackPara flag;
	string send_buf;
	char b[10]="1";
	::send(sockClient, b, sizeof(b), 0);
	::recv(sockClient, (char*)&login, sizeof(Info), 0);
	string username = login.username;
	char sql[SQL_SIZE];
	sprintf_s(sql, "SELECT * from user_table where NAME ='%s';", username.c_str());
	rc = sqlite3_exec(db, sql, login_callback, &flag, &zErrMsg);
	if (rc != SQLITE_OK)
	{
		fprintf(stderr, "SQL error:%s\n", zErrMsg);
		sqlite3_free(zErrMsg);
	}
	else
	{
		if (flag.str.size() == 0)
		{
			send_buf = "2";
			::send(sockClient, send_buf.c_str(), send_buf.size(), 0);
			username = "NULL";
			return username;
		}
		else if (flag.para == 1)
		{
			send_buf = "3";
			::send(sockClient, send_buf.c_str(), send_buf.size(), 0);
			username = "NULL";
			return username;
		}
		else
		{
			string password = login.password;
			if (flag.str == password)
			{
				send_buf = "1";
				::send(sockClient, send_buf.c_str(), send_buf.size(), 0);
				sprintf_s(sql, "UPDATE user_table SET ONLINE = 1 WHERE name = '%s';", username.c_str());
				sqlite3_exec(db, sql, NULL, NULL, &zErrMsg);
				strcpy(userinfo.username,login.username);
				strcpy(userinfo.password,login.password);
				userinfo.WinNum = flag.WinNum;
				userinfo.LossNum = flag.LossNum;
				userinfo.PmNum = flag.PmNum;
				userinfo.PerPmNum = flag.PerPmNum;
				char bb[10];
				::recv(sockClient, bb, sizeof(bb), 0);
				::send(sockClient, (char*)&userinfo, sizeof(UserInfo), 0);
				return username;
			}
			else
			{
				send_buf = "4";
				::send(sockClient, send_buf.c_str(), send_buf.size(), 0);
				username = "NULL";
				return username;
			}
		}
	}
	username = "NULL";
	return username;
}
void Server::OnlineUsers(SOCKET sockClient)
{
	CallBackPara p[MAX_USERS];
	string send_buf;
	p[0].para = 0;
	string sql = "SELECT * FROM user_table WHERE ONLINE = 1;";
	rc = sqlite3_exec(db, sql.c_str(), online_callback, p, &zErrMsg);
	if (rc != SQLITE_OK)
	{
		fprintf(stderr, "SQL error:%s\n", zErrMsg);
		sqlite3_free(zErrMsg);
	}
	else
	{
		char oun[100];
		std::cout << p[0].para << endl;
		sprintf_s(oun, "%d", p[0].para);
		send_buf = oun;
		::send(sockClient, send_buf.c_str(), send_buf.size(), 0);
		send_buf = "";
		if (p[0].para != 0)
		{
			int i;
			for (i = 0; i < p[0].para - 1; i++)
			{
				send_buf += p[i].str;
				send_buf += "#";
			}
			send_buf += p[i].str;
			::send(sockClient, send_buf.c_str(), send_buf.size(), 0);
		}
	}
}
void Server::DistributePM(SOCKET sockClient, string username)
{
	char sql[256];
	sprintf_s(sql, "SELECT * FROM pokemon_table WHERE USER = '%s';", username.c_str());
	PMList pmlist;
	pmlist.num = 0;
	rc = sqlite3_exec(db, sql, DistributePM_callback, &pmlist, &zErrMsg);
	if (rc != SQLITE_OK)
	{
		fprintf(stderr, "SQL error:%s\n", zErrMsg);
		sqlite3_free(zErrMsg);
	}
	else
	{
		Pokemon* PMptr;
		if (pmlist.num == 0)
		{
			PMptr = new Venusaur;
			PMptr->FirstSave(username,db);
			delete PMptr;
			PMptr = new Charizard;
			PMptr->FirstSave(username,db);
			delete PMptr;
			PMptr = new Blastoise;
			PMptr->FirstSave(username,db);
			delete PMptr;
			PMptr = NULL;
		}
	}
}
void Server::DisplayPM(SOCKET sockClient,string username)
{
	char sql[256];
	sprintf_s(sql, "SELECT * FROM pokemon_table WHERE USER = '%s';",username.c_str());
	PMList pmlist[MAX_PMS];
	pmlist[0].num = 0;
	rc = sqlite3_exec(db, sql, DisplayPM_callback, &pmlist, &zErrMsg);
	if (rc != SQLITE_OK)
	{
		fprintf(stderr, "SQL error:%s\n", zErrMsg);
		sqlite3_free(zErrMsg);
	}
	int rev=::send(sockClient, (char*)pmlist, sizeof(PMList)*(pmlist[0].num+1), 0);
}
int Server::login_callback(void *flag, int argc, char **argv, char **azColName)
{
	CallBackPara *f = (CallBackPara *)flag;
	(*f).str = argv[2];
	(*f).para = atoi(argv[3]);
	(*f).WinNum = atoi(argv[4]);
	(*f).LossNum = atoi(argv[5]);
	(*f).PmNum = atoi(argv[6]);
	(*f).PerPmNum = atoi(argv[7]);
	return 0;
}
int Server::online_callback(void *flag, int argc, char **argv, char **azColName)
{
	CallBackPara *f = (CallBackPara *)flag;
	f[f[0].para].str = argv[1];
	f[0].para++;
	return 0;
}
int Server::DistributePM_callback(void *flag, int argc, char **argv, char **azColName)
{
	PMList *p = (PMList*)flag;
	(*p).num++;
	return 0;
}
int Server::DisplayPM_callback(void *flag, int argc, char **argv, char **azColName)
{
	PMList *p = (PMList*)flag;
	p[0].num++;
	p[p[0].num].onlyid = atoi(argv[0]);
	p[p[0].num].id = atoi(argv[3]);
	strcpy(p[p[0].num].name, argv[2]);
	strcpy(p[p[0].num].nicky, argv[4]);
	p[p[0].num].grade = atoi(argv[5]);
	p[p[0].num].exp = atoi(argv[6]);
	p[p[0].num].Str = atoi(argv[9]);
	p[p[0].num].Int = atoi(argv[10]);
	p[p[0].num].Phy = atoi(argv[11]);
	p[p[0].num].Sta = atoi(argv[12]);
	p[p[0].num].Res = atoi(argv[13]);
	p[p[0].num].Agi = atoi(argv[14]);
	p[p[0].num].skills = atoi(argv[15]);
	p[p[0].num].skillbar[0] = atoi(argv[16]);
	p[p[0].num].skillbar[1] = atoi(argv[17]);
	p[p[0].num].skillbar[2] = atoi(argv[18]);
	p[p[0].num].skillbar[3] = atoi(argv[19]);
	p[p[0].num].nature = atoi(argv[7]);
	p[p[0].num].ppt = atoi(argv[8]);
	
	return 0;
}
void Server::Exit(SOCKET sockClient,string username)
{
	char sql[100];
	sprintf_s(sql, "UPDATE user_table SET ONLINE = 0 WHERE NAME = '%s';", username.c_str());
	sqlite3_exec(db, sql, NULL, NULL, &zErrMsg);
}
void Server::SerClose()
{
	char sql[SQL_SIZE];
	sprintf_s(sql, "UPDATE user_table SET ONLINE = 0;");
	sqlite3_exec(db, sql, NULL, NULL, &zErrMsg);
	sqlite3_close(db);
	::closesocket(sock_svr);
	::WSACleanup();
	std::cout << "Socket closed..." << endl;
}
Server::Server()
{
	connect_database();
	create_usertable();
	create_pkmtable();
	
	thread_num = 0;
	addr_svr.sin_family = AF_INET;
	addr_svr.sin_port = htons(SER_PORT);
	addr_svr.sin_addr.S_un.S_addr = INADDR_ANY;
	
	sock_svr = ::socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (sock_svr == INVALID_SOCKET)
	{
		cerr << "Failed to create server socket!Error code: " << ::WSAGetLastError() << "\n";
		::WSACleanup();
		system("pause");
		exit(0);
	}
	std::cout << "Server socket created successfully...\n";
	
	int rev = ::bind(sock_svr, (LPSOCKADDR)&addr_svr, sizeof(addr_svr));
	if (rev != 0)
	{
		cerr << "Failed to bind server socket!Error code: " << ::WSAGetLastError() << "\n";
		::WSACleanup();
		system("pause");
		exit(0);
	}
	std::cout << "Server socket bind successfully...\n";

	rev = ::listen(sock_svr, MAXCONNECT);
	if (rev == SOCKET_ERROR)
	{
		cerr << "Server socket failed to listen!Error code: " << ::WSAGetLastError() << "\n";
		::WSACleanup();
		system("pause");
		exit(0);
	}
	std::cout << "Server socket started to listen...\n";

	std::cout << "Server started successfully..." << endl;
}
//维护线程还需要改进,可以考虑根据this_thread::get_id 做一个映射，用joinable()查看线程是否存在
void Server::WaitForClient()
{
	while (true)
	{
		addr_len = sizeof(addr_clt);
		sock_clt = NULL;
		sock_clt = ::accept(sock_svr, (SOCKADDR*)&addr_clt, &addr_len);
		if (sock_clt == INVALID_SOCKET)
		{
			cerr << "Failed to accept client!Error code: " << ::WSAGetLastError() << "\n";
			::WSACleanup();
			system("pause");
			exit(0);
		}
		if (thread_num < MAX_THREAD)
		{
			thread_fd[thread_num] = std::move(std::thread{ std::bind(&Server::ConProcess,this, sock_clt) });
			thread_num++;
		}
	}
}
void Server::ConProcess(SOCKET sockClient)
{
	char buffer[BUF_SIZE];
	string send_buf;
	std::cout << "A new client connected...IP address: " << inet_ntoa(addr_clt.sin_addr) << ", port number: " << ::ntohs(addr_clt.sin_port) << endl;
	string username="NULL";
	while (true)
	{
		int rev = ::recv(sockClient, buffer, BUF_SIZE, 0);
		PMList pmlist[MAX_PMS+1];
		pmlist[0].num = 0;
		if (rev == -1)
			break;
		buffer[rev] = '\0';
		string b = buffer;
		if (buffer[0] == '1')
		{
			sign_up(sockClient);
		}
		else if (buffer[0] == '2')
		{
			username=login(sockClient);
			if (username != "NULL")
			{
				DistributePM(sockClient, username);
			}
		}
		else if (buffer[0] == '3')
		{
			if (username != "NULL")
			{
				Exit(sockClient, username);
				cout << "User logged out" << ", port number: " << ::ntohs(addr_clt.sin_port) << endl;
			}
		}
		else if (buffer[0] == '4')
		{
			OnlineUsers(sockClient);
		}
		else if (buffer[0] == '5')
		{
			DisplayPM(sockClient, username);
		}
		else if (b == "LOSS1")
		{
			UserLoss(sockClient, username);
		}
		else if (b == "WIN1")
		{
			UserWin(sockClient, username);
		}
	}
	std::cout << "The port was disconnected.  " << inet_ntoa(addr_clt.sin_addr) << ", port number: " << ::ntohs(addr_clt.sin_port) << endl;
	closesocket(sockClient);
}
/*int Server::send(SOCKET sockClient)
{
	int rev = ::send(sockClient, send_buf.c_str(), send_buf.size(), 0);
	return rev;
}
int Server::rec(SOCKET sockClient)
{
	int rev = ::recv(sockClient, buffer, BUF_SIZE, 0);
	return rev;
}*/
void Server::ext()
{
	char x;
	x = _getch();
	if (x == '9')
	{
		SerClose();
		system("pause");
		exit(0);
	}
}
/*Server::~Server()
{
	SerClose();
	sqlite3_close(db);
	::closesocket(sock_clt);
	::closesocket(sock_svr);
	::WSACleanup();
	cout << "Socket closed..." << endl;
}*/
void Server::create_pkmtable()
{
	char* sql = "CREATE TABLE IF NOT EXISTS pokemon_table(\
		OID INTEGER PRIMARY KEY AUTOINCREMENT,\
		USER TEXT NOT NULL,\
		NAME TEXT NOT NULL,\
		PMID INTEGER NOT NULL,\
		NICKY TEXT NOT NULL,\
		GRADE INTEGER NOT NULL,\
		EXP INTEGER NOT NULL,\
		NATURE INTEGER NOT NULL,\
		PROPERTY INTEGER NOT NULL,\
		STR_IV INTEGER NOT NULL,\
		INT_IV INTEGER NOT NULL,\
		PHY_IV INTEGER NOT NULL,\
		STA_IV INTEGER NOT NULL,\
		RES_IV INTEGER NOT NULL,\
		AGI_IV INTEGER NOT NULL,\
		SKILLS INTEGER NOT NULL,\
		SKILL_BAR1 INTEGER NOT NULL,\
		SKILL_BAR2 INTEGER NOT NULL,\
		SKILL_BAR3 INTEGER NOT NULL,\
		SKILL_BAR4 INTEGER NOT NULL);";
	rc = sqlite3_exec(db, sql, NULL, NULL, &zErrMsg);
	if (rc != SQLITE_OK)
	{
		fprintf(stderr, "SQL error: %s\n", zErrMsg);
		sqlite3_free(zErrMsg);
	}
	else
	{
		fprintf(stdout, "Table2 created successfully\n");
	}
}
void Server::UserLoss(SOCKET sockClient, string username)
{
	char sql[SQL_SIZE];
	sprintf_s(sql, "SELECT * from user_table where NAME ='%s';", username.c_str());
	int lossnum;
	rc = sqlite3_exec(db, sql, userloss_callback, &lossnum, &zErrMsg);
	if (rc != SQLITE_OK)
	{
		fprintf(stderr, "SQL error:%s\n", zErrMsg);
		sqlite3_free(zErrMsg);
	}
	else
	{
		lossnum++;
		sprintf_s(sql, "UPDATE user_table SET LOSSNUM = %d WHERE name = '%s';", lossnum, username.c_str());
		rc = sqlite3_exec(db, sql, NULL, NULL, &zErrMsg);
		if (rc != SQLITE_OK)
		{
			fprintf(stderr, "SQL error:%s\n", zErrMsg);
			sqlite3_free(zErrMsg);
		}
	}
}
int Server::userloss_callback(void *flag, int argc, char **argv, char **azColName)
{
	int *p = (int *)flag;
	(*p) = atoi(argv[5]);
	return 0;
}
void Server::UserWin(SOCKET sockClient, string username)
{
	UserInfo user;
	PMList pmlist[MAX_PMS];
	char buffer[10] = "1";
	::send(sockClient, buffer, sizeof(buffer), 0);
	::recv(sockClient, (char*)&user, sizeof(UserInfo), 0);
	char sql[SQL_SIZE];
	sprintf_s(sql, "UPDATE user_table SET WINNUM = %d WHERE name = '%s';", user.WinNum, user.username);
	rc = sqlite3_exec(db, sql, NULL, NULL, &zErrMsg);
	if (rc != SQLITE_OK)
	{
		fprintf(stderr, "SQL error:%s\n", zErrMsg);
		sqlite3_free(zErrMsg);
	}
	::send(sockClient, buffer, sizeof(buffer), 0);
	::recv(sockClient, (char*)pmlist, (unsigned int)sizeof(PMList) * MAX_PMS, 0);
	for (int i = 1; i <= pmlist[0].num; i++)
	{
		sprintf_s(sql, "UPDATE pokemon_table SET GRADE = %d, EXP = %d, SKILLS = %d, SKILL_BAR1 = %d, SKILL_BAR2 = %d, SKILL_BAR3 = %d, SKILL_BAR4 = %d WHERE OID = %d;",
			pmlist[i].grade, pmlist[i].exp, pmlist[i].skills, pmlist[i].skillbar[0], pmlist[i].skillbar[1], pmlist[i].skillbar[2], pmlist[i].skillbar[3], pmlist[i].onlyid);
		rc = sqlite3_exec(db, sql, NULL, NULL, &zErrMsg);
		if (rc != SQLITE_OK)
		{
			fprintf(stderr, "SQL error:%s\n", zErrMsg);
			sqlite3_free(zErrMsg);
		}
	}
}