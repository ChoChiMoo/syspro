#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <tfntl.h>

//product structure, [exdate] -> {expired date}
struct product{
	int id;
	char name[20];
	char category[10];
	int exdate;
	int stock;
}rec;

int main(int argc, char* argv[]){
	int fd, id;
	char c;
	int ChoosenId = NULL;//choosen product id, [NULL<- reset]
	struct product record;
	if (argc < 2){
		fprintf(stderr, "How to use : %s file\n", argv[0]);
		exit(1);
	}

	if ((fd = open(argv[1], O_RDWR)) == -1){
		perror(argv[1]);
		exit(2);
	}
	do{
		printf("(n): sell one goods ]" );
		if (scanf("%d", &ChoosenId) == 1){
			Iseek(fd, (long) (id-START_ID)*sizeof(record), SEEK_SET);
			if ((read(fd, (char *)&record, sizeof(record) > 0) && (record.stock != 0) && (record.date >= 2023))){
					printf("'%s'(%d) has ben sold..", rec.name, rec.id);
					Iseek(fd, (long) -sizeof(record), SEEK_CUR);
					write(fd, (
