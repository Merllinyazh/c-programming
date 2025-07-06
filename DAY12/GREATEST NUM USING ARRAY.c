#include <stdio.h>

int main()
{
    int n=5;
    int arr[n];
    printf("enter");
    scanf("%d",&n);
    int arr2[n];
    int max;
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max)
        max=arr[i];
    }
    printf("%d\n",max);
    // for(int i=0;i<n;i++){
    //     arr2[i]=arr[i]+1;
    // }
    // for(int i=0;i<n;i++){
    //     printf("%d\n",arr2[i]);
    // }
}
