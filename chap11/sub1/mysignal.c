#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

void signal();

int main(){
	signal(SIGALRM, alarmHandler);
}


void signal(int signo, actionHandler){

}
