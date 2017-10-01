#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "mytoc.h"

int main(){
  char **token;
  int i;
  //int token_num;
  char * user_command;

  char **token1;
  char **token2;
  char **token3;
  char **token4;
  char **token5;
  char **token6;

  // Test cases
  char *t1;
  char *t2;
  char *t3;
  char *t4;
  char *t5;

  t1 = "Hello my dog's name is Darwin.";
  t2 = "     Hello   World!    ";
  t3 = "";
  t4 = "          ";
  t5 = " HelloWorld";

    while (1) {
      printf("%s\n", t1);
      token_num = token_count(t1, ' ');
      token1 = mytoc(t1, ' ');
      for (i=0; i<token_num; i++) printf("argv[%d] = %s\n", i, token1[i]);

      printf("%s\n", t2);
      token_num = token_count(t2, ' ');
      token2 = mytoc(t2, ' ');
      for (i=0; i<token_num; i++) printf("argv[%d] = %s\n", i, token2[i]);

      printf("%s\n", t3);
      token_num = token_count(t3, ' ');
      token3 = mytoc(t3, ' ');
      for (i=0; i<token_num; i++) printf("argv[%d] = %s\n", i, token3[i]);

      printf("%s\n", t4);
      token_num = token_count(t4, ' ');
      token4 = mytoc(t4, ' ');
      for (i=0; i<token_num; i++) printf("argv[%d] = %s\n", i, token4[i]);

      printf("%s\n", t5);
      token_num = token_count(t5, ' ');
      token5 = mytoc(t5, ' ');
      for (i=0; i<token_num; i++) printf("argv[%d] = %s\n", i, token5[i]);
      //free(token5);

      break;
    }

  // user input tokenizer
  while (1) {
    user_command = user_prompt();
    token_num = token_count(user_command, ' ');
    //token_store(token_num, up.user_command, ' ');
    token = mytoc(user_command, ' ');
    //if (exit_command(user_command)) return 0;
    for (i=0; i<token_num; i++) printf("argv[%d] = %s\n", i, token[i]);

    if (exit_command(user_command)) return 0;
    //if (exit_command(token[0])) return 0;
    free(token);
  }

  return 0;
}
