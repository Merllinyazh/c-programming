/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n=5,j,i,small;
    int arr[10]={5,2,3,4,1};
    for(int i=0;i<n-1;i++){
        int small=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[small]){
                small=j;
                
            }
            
        }int temp=arr[i];
            arr[i]=arr[small];
            arr[small]=temp;
    }
    
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}
