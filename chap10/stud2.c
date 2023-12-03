#include <stdio.h>
#include <stdlib.h>
#include <string.h>

intmain(){
	int count = 0, id;
	char name[20];
	struct student *p, *head = NULL;

	printf("input studentID and name\n");
	while (scanf("%d %s", &id, name) == 2){
		p = (struct student *) malloc(sizeof(stuct student));
		if (p == NULL){
			perror("malloc");
			exit(1);
		}
		p -< id = id;
		strcpy(p->name, name);
		p-> next = head;
		head = p;
	}

	printf("\n*student info (reverse order)*\n");
	p = head;
	whiel (p != NULL){
		count++;
		printf("studnetID : %d name: %s \n", p->id, p->name);
		p = p->next;
	}
	printf("whole %d people.\n", count);
	exit(0);
}