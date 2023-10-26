#include <stdio.h>
#include <stdlib.h>

//product structure, [exdate] -> {expired date}
struct product{
	int id;
	char name[20];
	char category[10];
	int exdate;
	int stock;
};

int main(int argc, char* argv[]){
	struct product rec;
	FILE *fp;

	if (argc != 2){
		fprintf(stderr, "How to use: %s FileName\n", argv[0]);
		exit(1);
	}

	fp = fopen(argv[1], "wb");
	printf("%-9s %-9s %-9s %-9s %-13s\n", "id", "name", "category", "expired date", "stock");

	while (scanf("%d %s %s %d %d", &rec.id, rec.name, rec.category, &rec.exdate, &rec.stock) == 5)
		fwrite(&rec, sizeof(rec), 1, fp);
	
	fclose(fp);
	exit(0);
}


