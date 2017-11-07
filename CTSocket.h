#pragma once
#include <WinSock2.h>
#include <map>
using namespace std;
/*
		Author: Redfox
		  Date: 2017-11-07
   Description: It is easy to access socket via CTSocket.
*/
class CTSocket
{
public:
	CTSocket();
	~CTSocket();
private:
	SOCKET m_socket;
};

