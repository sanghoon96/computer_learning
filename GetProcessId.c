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

/*
ps -ef | grep GetProcessId                              # check PID or ~$ top
sudo kill -9 18181                                      # Check Terminal loop

1. 중간에 while 문 한번 빼고 실행. 부모 아이디가 안나옴.

2. ps -ef | grep GetProcessId &
앰퍼샌드 붙이고 하면 백그라운드에서 실행
*/