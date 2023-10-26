#include <stdio.h>

int main(int argc, char *argv[]){
	FILE *fp;
	int c, LineCount = 0;
	if(argc < 2) fp = stdin;
	else fp = fopen(argv[1],"r");

	c = getc(fp);
	while (LineCount < 2){
		putc(c, stdout);
		c = getc(fp);
		if (c == '\n') LineCount++;
	}
	fclose(fp);
	return 0;
}
