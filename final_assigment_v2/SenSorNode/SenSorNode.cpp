#include "SenSorNode.h"

SenSorNode::SenSorNode(uint8_t id)
{
    SenSorID = id;
}
SenSorNode::~SenSorNode(SenSorNode &node)
{
    close(node.com.sockfd);
}


bool Create_Socket(SenSorNode &node)
{
    memset(&node.com.server_addr, 0, sizeof(node.com.server_addr));
    node.com.sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if(node.com.sockfd < 0) {
        perror("Socket failed");
        return false;
    }

    // memset(&server_addr, 0, sizeof(server_addr));
    // sockfd = socket(AF_INET, SOCK_STREAM, 0);
    // if (sockfd < 0) {
    //     perror("socket failed");
    //     exit(EXIT_FAILURE);
    // }
}

bool Request_Connect(SenSorNode &node)
{
    node.com.server_addr.sin_family = AF_INET;
    node.com.server_addr.sin_addr = inet_addr("127.0.0.1");
    node.com.server_addr.sin_port = htons(6000);

    if (connect(node.com.sockfd, (struct sockaddr *)&node.com.server_addr, sizeof(node.com.server_addr)) < 0) {
        perror("Connect failed");
        ~SenSorNode(node);
        return false;
    }

    // server_addr.sin_family = AF_INET;
    // server_addr.sin_addr.s_addr = inet_addr("127.0.0.1");
    // server_addr.sin_port = htons(6000);

    // if (connect(sockfd, (struct sockaddr *)&server_addr, sizeof(server_addr)) < 0) {
    //     perror("connect failed");
    //     close(sockfd);
    //     exit(EXIT_FAILURE);
    // }
}
bool Send_Data(SenSorNode &node)
{
    sprintf(node.com.send_buffer, "SensorID: %d - Tempure: %.2f", node.SenSorID, node.Tempure);
    if (write(node.com.sockfd, node.com.send_buffer, strlen(node.com.send_buffer)) < 0) {
        perror("Send failed");
        return false;
    }
    else {
        printf("Data sent\n");
    }

    // sprintf(send_buffer, "SensorID: %d - Temp: %.2f", id, Tempure);
    // if (write(sockfd, send_buffer, strlen(send_buffer)) < 0) {
    //     perror("write failed");
    // } 
	// else {
    // 	printf("Data sent\n");
    // }
}
int8_t SenSorNode::Measure_Temp()
{
    Tempure = MIN_TEMP + (rand() / (double) RAND_MAX) * (MAX_TEMP - MIN_TEMP);
    return Tempure;
}