/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a=20;
    int *pointer=&a;
    
    char b='A';
    char *charptr=&b;
    
    printf("%d\n",a);//data of a
    printf("%d\n",*pointer);//data of a
    printf("%p\n",&a);//address of a
    printf("%p\n",pointer);  //address of a
    
    
    printf("%p\n",charptr);//address of b
    
    
    int *ptr=malloc(sizeof(int));
    *ptr=10;
    printf("%p\n",ptr);
    printf("%d\n",*ptr);
  

    return 0;
}