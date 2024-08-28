#include <bits/stdc++.h>
using namespace std;
#define MIN_TEMP 18
#define MAX_TEMP 27

int main()
{
    
    while(1)
    {
        int Tempure = MIN_TEMP + (rand() / (double) RAND_MAX) * (MAX_TEMP - MIN_TEMP);
        cout << Tempure << endl; 
    }    
    return 0;
}

int main()
{
    int sockfd;
    struct sockaddr_in server_addr;
    char send_buffer[1024];


    memset(recv_buffer, 0, sizeof(recv_buffer));
    memset(&server_addr, 0, sizeof(server_addr));

    sockfd = socket(AF_UNIX, SOCK_STREAM, 0);
    server_addr.sin_family = AF_UNIX;
	server_addr.sin_addr.s_addr = inet_addr("127.0.0.1");
	server_addr.sin_port = htons(1000);

    bind(sockfd, (struct sockaddr*)&server_addr, sizeof(server_addr));

    if(connect(sockfd, (struct sockaddr *)&server_addr, sizeof(server_addr)) == 0) 
    {
        send(connfd , send_buffer , strlen(send_buffer) , 0 );
        
    }
    close(sockfd);
}