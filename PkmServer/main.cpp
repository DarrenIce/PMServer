#include "server.h"

int main()
{
	//û�����
	Server server;
	srand((unsigned int)time(NULL));
	std::thread t(&Server::ext,&server);	
	server.WaitForClient();
	system("pause");
}
