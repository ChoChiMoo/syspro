#include <stdio.h>
#include <stdlib.h>

//product structure, [exdate] -> {expired date}
struct product{
	int id;
	char name[20];
	char category[10];
	int exdate;
	int stock;
}rec;

int main(int argc, char* argv[]){
	FILE *fp;
	int printtype = 3;
	if(argc != 2){
		fprintf(stderr, "How to use: %s FileName\n", argv[0]);
		return 1;
	}

	if ((fp = fopen(argv[1], "rb")) == NULL){
		fprintf(stderr,"Error Open File\n");
		return 2;
	}

	printf("--Goods query--\n");
	while (1){
		//set printtype [0->all] [1->available] [2-> exit] [3->reset]
		printtype = 3;

		printf("0: list of all goods, 1: list of available goods, 2: exit )");
		scanf("%d", &printtype);
		if (printtype == 0){
			printf("%10s %10s %10s %10s %10s\n", "id", "name", "category", "expired date", "stock");

				while (fread(&rec, sizeof(rec), 1, fp)>0)
					printf("%10d %10s %10s %10d %10d\n", rec.id, rec.name, rec.category, rec.exdate, rec.stock);
		}
		else if (printtype == 1){
						printf("%10s %10s %10s %10s %10s\n", "id", "name", "category", "expired date", "stock");

								while (fread(&rec, sizeof(rec), 1, fp)>0){
										if(rec.stock != 0){
												printf("%10d %10s %10s %10d %10d\n", rec.id, rec.name, rec.category, rec.exdate, rec.stock);
										}
								}
				}
				else if (printtype == 2){
					fclose(fp);
					break;
				}
		}
}
