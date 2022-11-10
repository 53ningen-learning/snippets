#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>

int main()
{
    struct sigaction act;
    act.sa_handler = SIG_IGN;
    act.sa_flags = SA_NOCLDWAIT;
    if (sigaction(SIGCHLD, &act, NULL) < 0)
    {
        exit(1);
    }

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
