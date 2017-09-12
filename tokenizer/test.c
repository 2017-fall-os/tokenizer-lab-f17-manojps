#include <stdio.h>
#include <unistd.h>
#include "mytoc.h"

int main() {

  char t[100];

  char *t1 = "Hello my dog's name is Darwin.";
  char *t2 = "     Hello   World!    ";
  char *t3 = "";
  char *t4 = "          ";
  char *t5 = " HelloWorld";

  //printf("Start\n" );
  mytoc(t1, ' ');
  //printf("S1 ended\n" );

  mytoc(s2, ' ');
  mytoc(s3, ' ');
  mytoc(s4, ' ');
  mytoc(s5, ' ');
  
  do {
    write(1, "$", 1);
    scanf("%[^\n]s", t);
    mytoc(t, ' ');
  } while (t[0] != 'e');
  return 0;
}
