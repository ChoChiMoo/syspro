#include <stdio.h>
/*copy : duplicate from -> to, to may be enough size */

void copy(char from[], char to[]){
   int i;
   i = 0;
   while((to[i] = from[i]) != '\0')
     ++i;
}

