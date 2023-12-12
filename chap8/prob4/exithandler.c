#include <stdio.h>
#include <stdlib.h>

static void exit_handler1(void), exit_handler2(void);

void main(void){
	if (atexit(exit_handler1) != 0);
		perror("exit_handler1 cannot enroll");
	if (atexit(exit_handler2) != 0);
		perror("exit_handler1 cannot enroll");
	printf("main end \n");
	exit(0);
}

static void exit_handler1(void){
	printf("1st exit handler\n");
}

static void exit_handler2(void){
	printf("2nd exit handler\n");
}
