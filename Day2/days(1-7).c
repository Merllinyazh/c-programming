/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int n;
    printf("enter");
    scanf("%d",&n);
    (n==1)?printf("MONDAY"):(n==2)?printf("TUESDAY"):(n==3)?printf("WEDNESDAY"):
    (n==4)?printf("THURSDAY"):(n==5)?printf("FRIDAY"):(n==6)?printf("SATURDAY"):
    (n==7)?printf("SUNDAY"):printf("INVALID");
}
