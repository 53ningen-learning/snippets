#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main()
{
    pid_t pid = fork();
    int test = 0;
    switch (pid)
    {
    case -1:
        printf("fork failed");
        break;
    case 0:
        test = 10;
        printf("child: %d\n", test);
        sleep(1);
        printf("sleep 1s...\n");
        sleep(2);
        printf("sleep 2s...\n");
        exit(0);
        break;
    default:
        waitpid(pid, NULL, 0);
        printf("parent %d\n", test);
        break;
    };

    return 0;
}
