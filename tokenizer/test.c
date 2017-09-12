#include <stdio.h>
#include <unistd.h>
#include "mytoc.h"

int main() {
    
    char t[100];
    
    char *t1 = "Hello my dog's name is Darwin. ";
    char *t2 = "     Hello   World!    ";
    char *t3 = "";
    char *t4 = "          ";
    char *t5 = " HelloWorld";
    
    mytoc(t1, ' ');
    mytoc(t2, ' ');
    mytoc(t3, ' ');
    mytoc(t4, ' ');
    mytoc(t5, ' ');
    
    do {
        write(1, "$", 1);
        scanf("%[^\n]s", t);
        //mytoc(t, ' ');
    } while (t[0] != 'e');
    return 0;
}
