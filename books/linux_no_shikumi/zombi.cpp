#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main()
{
    pid_t pid = fork();
    switch (pid)
    {
    case -1:
        printf("fork failed");
        break;
    case 0:
        // child process
        exit(0);
        break;
    default:
        sleep(10);
        break;
    }

    return 0;
}
