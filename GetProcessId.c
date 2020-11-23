#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    pid_t pid;
    if ((pid = fork()) == -1)
        perror("fork failed");
    else if (pid != 0) /* getpid() 자신 프로세스 ID 반환 */
        printf("PID is %ld, child process pid is %ld\n", getpid(), pid);
    else
    {
        while (1)
        { /* getppid() 부모 프로세스 ID 반환 */
            printf("PID is %ld, parent process pid is %ld\n", getpid(), getppid());
        }
    }
    return 0;
}