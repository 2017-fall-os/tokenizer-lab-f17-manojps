#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "mytoc.h"

int main(){
  char **token; /* Tokenized output variable for user prompt */
  int i; /* Temporary variable */
  char * user_command; /* User input variable through prompt */

  /* Tokenized output variable for test cases */
  char **token1;
  char **token2;
  char **token3;
  char **token4;
  char **token5;

  /* Predefines test case inputs */
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

  /* Tokenizer test cases */
    while (1) {
      /* Test case 1 */
      printf("%s\n", t1);
      token_num = token_count(t1, ' ');
      if (token_num>0) {
          token1 = mytoc(t1, ' ');
          for (i=0; i<token_num; i++) 
              fprintf(stdout, "argv[%d] = %s\n", i, token1[i]);
          free(token1);
      }
      
      /* Test case 2 */
      printf("%s\n", t2);
      token_num = token_count(t2, ' ');
      if (token_num>0) {
          token2 = mytoc(t2, ' ');
          for (i=0; i<token_num; i++) 
              fprintf(stdout, "argv[%d] = %s\n", i, token2[i]);
          free(token2);
      }

      /* Test case 3 */
      printf("%s\n", t3);
      token_num = token_count(t3, ' ');
      if (token_num>0) {
          token3 = mytoc(t3, ' ');
          for (i=0; i<token_num; i++) 
              fprintf(stdout, "argv[%d] = %s\n", i, token3[i]);
          free(token3);
      }

      /* Test case 4 */
      printf("%s\n", t4);
      token_num = token_count(t4, ' ');
      if (token_num>0) {
          token4 = mytoc(t4, ' ');
          for (i=0; i<token_num; i++) 
              fprintf(stdout, "argv[%d] = %s\n", i, token4[i]);
          free(token4);
      }


      /* Test case 4 */
      printf("%s\n", t5);
      token_num = token_count(t5, ' ');
      if (token_num>0) {
          token5 = mytoc(t5, ' ');
          for (i=0; i<token_num; i++) 
              fprintf(stdout, "argv[%d] = %s\n", i, token5[i]);
          free(token5);
      }
      
      fflush(stdout); 
      
      break;
    }

  /* User prompt to test tokenizer with random inputs */
  while (1) {
    user_command = user_prompt(); /* User input */
    token_num = token_count(user_command, ' '); /* Count number of tokens in user input */
    if (token_num > 0) {
        token = mytoc(user_command, ' '); /* Tokenize user input */
        for (i=0; i<token_num; i++) 
            fprintf(stdout, "argv[%d] = %s\n", i, token[i]); /* Print tokens */
        if (exit_command(user_command)) 
            return 0; /* Check for exit condition */
        fflush(stdout);
        free(token);
    }
    

  }

  return 0;
}
