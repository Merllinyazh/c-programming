/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c){
        printf("equilateral triangle");
    }
    else if(a+b>c ||a+c>b || b+c>a){
        printf("right angle triangle");
    }else{
        printf("no triangle");
    }
}
