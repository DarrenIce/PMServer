#include "server.h"

int main()
{
	//û�����
	Server server;
	srand((unsigned int)time(NULL));
	std::thread t(&Server::ext,&server);
	//std::thread s(&Server::managethread, &server);
	server.WaitForClient();
	system("pause");
}
