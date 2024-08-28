#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

using namespace std;
#ifndef _PROCESS_H_
#define _PROCESS_H_

class Process {
protected:
    pid_t pid;
public:
    virtual void run() = 0;  
    pid_t getPID() { 
        return pid; 
    }
};


#endif