/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
     int n;
    printf("enter");
    scanf("%d",&n);
    int arr[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        arr2[i]=0;
    }
    for(int i=0;i<n;i++){
        int val=-1;
        for(int j=i+1;j<n;j++){
            if (arr[i]-arr[j]==1){ 
                
               //printf("%d",arr[j]);
               val=arr[j];
            }   
        
        }printf("%d\n",val);
    
    }
}