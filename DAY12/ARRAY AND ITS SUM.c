/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[5]={1,2,3,45,7};
    //printf("%d",arr[3]);
    int sum=0;
    for (int i=0;i<5;i++){
        //printf("%d",arr[i]);
        printf("i=%d,arr[%d]=%d\n",i,i,arr[i]);
        sum+=arr[i];
        printf("%d\n",sum);
        
    }

    return 0;
}
