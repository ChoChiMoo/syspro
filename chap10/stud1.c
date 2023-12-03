#include <stdio.h>
#include <stdlib.h>




struct student {
    int id;
    cahr name[20];
};

int main(){
	struct student *ptr
	int n, i;
	printf("how many students input?")
	scnaf("%d", &n);
	if (n <= 0){
		frpintf(stderr, "error: wrong students number\n");
		fprintf(stderr, program terminate\n");
		exit(1);
	}
	ptr = (struct student *) malloc(n* sizeof(struct student));
	if (ptr == NULL){
		perror("malloc");
