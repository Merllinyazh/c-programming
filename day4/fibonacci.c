/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,ans=0,pre=0,cur=1,temp=0;
    scanf("%d",&num);
    for(int i=0;i<=num;i++){
        ans=pre+cur;
        pre=cur;
        cur=ans;
        printf("%d",ans);
    }
}
