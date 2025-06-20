/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,ans,inc=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        ans=1;
        for(int j=1;j<=i+1;j++){
            ans=ans*j;
        }
        inc=inc+ans;
    }
    printf("%d",inc);
    
}

