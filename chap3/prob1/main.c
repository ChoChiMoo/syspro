#include <stdio.h>
#include "copy.h"

char line[MAXLINE]; // input line
/*pring longest line of input lines*/
main() {
  int len;
  int max;
  max = 0;

  while(gets(line) != NULL) {
    len = strlen(line);

    if(len > max) {
       max = len;
       copy(line, longest);
      }
    }

  if(max > 0) //if input line exist
    printf("%s \n", longest);

  return 0;
}

