#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main(){
    pid_t pid, ppid;
    pid=getpid();
    ppdi=getppid();
    printf("프로세스 ID: %d, 부모 프로세스 ID: %d", pid, ppid);
    return 0
}
