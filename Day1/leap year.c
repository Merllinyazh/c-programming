/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a;
    printf("entr the num");
    scanf("%d",&a);
    if(a%4==0 && a%100!=0) || (a%400==0))
    {
        printf("leap");
    }
    else{
        printf("not leap");
    }
   
    

    return 0;
}