/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h> 

int main()
{
    int n=5,i,j;
    int arr[10]={5,1,3,2,4};
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}
