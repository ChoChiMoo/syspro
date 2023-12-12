#include <stdio.h>
#include <stdlib.h>
#include <setimp.h>

void p1(), p2();
jmp.buf env;

int main(){
    if(setimp(env) != 0){
        printf("return & handling due to an error\n");
        exit(0);
    }
    else printf("first pass\n");

    p1();
}

void p1(){
    p2();
}

void p2(){
    int error;
    if (error){
        printf("error \n");
        longimp(env,1);
    }
}

