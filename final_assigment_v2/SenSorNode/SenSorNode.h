#include <bits/stdc++.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
using namespace std;

#ifndef _SENSOR_H_
#define _SENSOR_H_

#define MIN_TEMP 18
#define MAX_TEMP 27


typedef struct communicate
{
    int sockfd = -1;
    struct sockaddr_in server_addr;
    char send_buffer[100];

} communicate;

class SenSorNode{
private:
    uint8_t SenSorID;
    int8_t Tempure;
    communicate com;
public:
    SenSorNode(uint8_t);
    ~SenSorNode(SenSorNode &);
    friend bool Create_Socket(SenSorNode &);
    friend bool Request_Connect(SenSorNode &);
    friend bool Send_Data(SenSorNode &);
    int8_t Measure_Temp();
};


#endif