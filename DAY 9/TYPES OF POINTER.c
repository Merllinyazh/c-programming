
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // //simple pointer
    // int a=10;
    // int *p=&a;
    // printf("%p\n",p); //print address
    // printf("%d",*p);  //print value
    
    // //null pointer
    // int *ptr1=NULL;
    // printf("%p",ptr1);  //print null
    // printf("%d",*ptr1); //print null
    
    // //void pointer
    
    // void *ptr =&a;     //it has address eventhough it is void
    // printf("%d",*ptr); //it gives dereferencing error when we try to print the data in the void because coid is 0 datatype
    // printf("%p",ptr);
     
      //wild pointer
      int *wild;
      printf("%p\n",wild); //print addess
      printf("%d",*wild);  //print garbage value
       
    //   //dangling pointer
    //   int *dp=malloc(sizeof(int));
    //   printf("%p\n",dp);
    //   *dp=35;
    //   printf("%d\n",*dp);
    //   printf("%p\n",dp);
    //   free(dp);
    //   dp=NULL;
    //   printf("%p\n",dp);
   
   
    return 0;
    
}
