/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char str[100];
    printf("enter");
    scanf("%s",str);
      for (int i = 0; i < strlen(str); i++) {
          if (str[i] >= 'A' && str[i] <= 'Y') {
            printf("%c", (str[i] + 32)+1);
        } else if (str[i] >= 'a' && str[i] <= 'y') {
            printf("%c", (str[i] - 32)+1);
            
        }
          else if(str[i] >= 'z'){
              printf("%c", (str[i] - 32)-25);
          }
          else if(str[i] >= 'Z'){
              printf("%c", (str[i] + 32)-25);
          }
         else {
            printf("%c", str[i]);
        }
    }
}
