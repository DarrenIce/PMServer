#include "server.h"

int main()
{
	//Ã»ÓĞËæ»ú
	Server server;
	srand((unsigned int)time(NULL));
	std::thread t(&Server::ext,&server);
	//std::thread s(&Server::managethread, &server);
	server.WaitForClient();
	system("pause");
}
