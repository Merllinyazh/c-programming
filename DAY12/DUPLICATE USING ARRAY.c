/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
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
        int count=0;
        if(arr2[i]){
           continue;
        }
        for(int j=i+1;j<n;j++){
            if (arr[i]==arr[j]){ 
                //printf("%d\n",arr[i]);
                count++;
                arr2[j]=1;
            }
        }
        
        //if(count==0){  //for unique values
        if(count>0){
            printf("%d\n",arr[i]);
        }
    
    }
}