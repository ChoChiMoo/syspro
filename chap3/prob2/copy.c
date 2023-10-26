#include <stdio.h>
// copy: copy 'from' to 'to', if 'to' is enough big

void copy(char from[],char to[]){
	int i;
	i = 0;
	while((to[i] = from[i]) != '\0')
		++i;
}
