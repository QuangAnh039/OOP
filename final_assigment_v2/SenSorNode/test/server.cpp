#include <bits/stdc++.h>
#include <socket
void main()
{
    int connfd = -1;
    int listenfd = -1;
    struct sockaddr_in server_addr;
    time_t ticks;
    char recv_buffer[1024];
    
    memset(send_buffer, 0, sizeof(send_buffer));
    memset(&server_addr, 0, sizeof(server_addr));

    listenfd = socket(AF_UNIX, SOCK_STREAM, 0);

    server_addr.sin_family = AF_UNIX;
	server_addr.sin_addr.s_addr = inet_addr("127.0.0.1");
	server_addr.sin_port = htons(1000);

    bind(listenfd, (struct sockaddr*)&server_addr, sizeof(server_addr));

    listen(listenfd , 10); // hang doi 10 o
    
    connfd = accept(listenfd, (struct sockaddr*)NULL, NULL);
    ticks = time(NULL);
    read(connfd, recv_buffer, sizeof(recv_buffer)-1);
    printf("\n%s\n", recv_buffer);    
    close(connfd);
    close(listenfd);
    return 0;
}