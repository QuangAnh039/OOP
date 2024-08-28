#include "MainProcess.h"
#include "LogProcess.h"
void MainProcess::run()
{
    pid = fork();
    if(pid == 0) {
        LogProcess child;
        child.run();
        exit(0);
    } else if (pid > 0) {
        cout << "Hello Im parent Process";
        wait(NULL);
        cout << "I just wait child process";
    } else {
        perror("fork");
    }
}
