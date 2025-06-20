/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   char ch;
   printf("enter the char:");
   scanf("%c",&ch);
//   if ((ch>='A' && ch<='Z') ||(ch>='a' && ch<='z' )) {
//       printf("alphabet");
//   }
//   else if(ch>='0' && ch<='9'){
//       printf("numbers");
//   }
//   else{
//       printf("special character");
//   }

   ((ch>='A' && ch<='Z') ||(ch>='a' && ch<='z'))?printf("alphabet") :
   (ch>='0' && ch<='9')?printf("numbers"):printf("special character");
}
