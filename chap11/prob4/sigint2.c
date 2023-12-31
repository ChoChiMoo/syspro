#include <stdio.h>
#include <unistd.h>
#include <signal.h>

struct sigaction newact;
struct sigaction oldact;
void sigint_handler(int signo);

int main(void){
    newact.sa_handler = sigint_handler;
    sigfillset(&newact.sa_mask);

    sigaction(SIGINT, &newact, &oldact);
    while(1){
        printf("press ctrl+C \n");
        sleep(1);
    }
}

void sigint_handler(int signo){
    printf("%d times handling signal\n", signo);
    printf("press again to exit\n");
    sigaction(SIGINT, &oldact, NULL);
}

