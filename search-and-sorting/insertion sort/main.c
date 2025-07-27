#include <stdio.h>

int main()
{
    int arr[10]={1,4,5,3,2};
    int n=5;
    
    for(int i=1;i<n;i++){
        int j=i-1;
        int key=arr[i];
        while(j>=0 && key<arr[j]){
            arr[j+1]=arr[j];
            j--;
            
            
        }arr[j+1]=key;
        //printf("%d\n",arr[i]);
        
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}