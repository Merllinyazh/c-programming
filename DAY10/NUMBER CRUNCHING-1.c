/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    //reverse and store as int
    int d,rem;
    int reverse=0;
    printf("enter");
    scanf("%d",&d);
    while(d>0){
         reverse = (reverse*10)+(d%10);
        //printf("%d\n",d);
        // printf("%d\n",rem);
         d=d/10;
       
        
    }
    
    printf("%d",reverse);
    
    //count
    
    // char b[100];
    // printf("enter");
    // scanf("%s",&b);
    // int len=strlen(b);
    // printf("%d",len);
    
    // int d=4567,count=0;
    // while(d>0){
    //     count++;
    //     d/=10;
    // }
    // printf("%d",count);
    
    
    //palindrome
    // int a;
    // scanf("%d",a);
    
    
}
