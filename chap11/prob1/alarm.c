#include <stdio.h>
#include <unistd.h>

int main(){
    alarm(5);
    printf("infinite roop\n");
    while(1){
        sleep(1);
        printf("1sec passed\n");
    }
    printf("no work\n");
}

