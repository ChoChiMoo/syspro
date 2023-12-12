#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//print process number

int main(){
	printf("my process number : [%d] \n", getpid());
	printf("my parent process nubmer : [%d] \n", getppid());
}
