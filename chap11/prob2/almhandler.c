#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

void alarmHandler();

int main(){
    signal(SIGALRM, alarmHandler);
    alarm(5);
    printf("infinite roop\n");
    while (1){
        sleep(1);
        printf("1sec passed\n");
    }
    printf("no work\n");
}

void alarmHandler(int signo){
    printf("wakeup\n");
    exit(0);
}

