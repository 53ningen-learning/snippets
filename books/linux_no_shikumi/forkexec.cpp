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
        execl("/bin/echo", "/bin/echo", "Hello,", "World!", NULL);
        break;
    default:
        // parent process
        sleep(10);
        break;
    }

    return 0;
}
