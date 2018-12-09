#pragma once
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "InitSock.h"
#include <Windows.h>
#include <string>
#include <regex>

#include "Semaphore.h"
#include "pokemons.h"

#define MAX_THREAD 10
#define BUF_SIZE 256
#define MAX_USERS 100
#define MAX_PMS 100



typedef struct user {
	int WinNum;
	int LossNum;
	int PmNum;
	int PerPmNum;
	char username[20];
	char password[20];
}UserInfo;

typedef struct su {
	char username[20];
	char password[20];
}Info;

class Server
{
public:
	sqlite3 *db;
	char *zErrMsg = 0;
	int rc;
	SOCKET sock_svr;
	SOCKET sock_clt;
	//std::string send_buf;
	sockaddr_in addr_svr;
	sockaddr_in addr_clt;
	int addr_len;
	int thread_num;
	std::thread thread_fd[MAX_THREAD];

	typedef struct cbp {
		int para;
		std::string str;
		int WinNum;
		int LossNum;
		int PmNum;
		int PerPmNum;
	}CallBackPara;
	typedef struct sp {
		std::string username;
		SOCKET sockClient;
	}SendtoThread;
	


	void connect_database();
	void create_usertable();
	void create_pkmtable();
	void sign_up(SOCKET sockClient);
	std::string login(SOCKET sockClient);
	void OnlineUsers(SOCKET sockClient);
	void DistributePM(SOCKET sockClient, std::string username);
	void DisplayPM(SOCKET sockClient, std::string username);
	void UserLoss(SOCKET sockClient, std::string username);
	void UserWin(SOCKET sockClient, std::string username);
	void Exit(SOCKET sockClient,std::string username);
	void ext();
	void SerClose();
	int username_valid(std::string str);
	int password_valid(std::string str);
	static int login_callback(void *flag, int argc, char **argv, char **azColName);
	static int online_callback(void *flag, int argc, char **argv, char **azColName);
	static int DistributePM_callback(void *flag, int argc, char **argv, char **azColName);
	static int DisplayPM_callback(void *flag, int argc, char **argv, char **azColName);
	static int userloss_callback(void *flag, int argc, char **argv, char **azColName);
	Server();
	void WaitForClient();
	//int send(SOCKET sockClient);
	//int  rec(SOCKET sockClient);
	void ConProcess(SOCKET sockClient);
	//~Server();
private:
	
};