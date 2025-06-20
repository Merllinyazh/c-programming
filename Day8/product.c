/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    //produvt of digits
    // int val=123,prod=1;
    // while(val>0){
    //     prod*=val%10;
    //     val/=10;
    // }
    // printf("%d",prod);
    
    //sum of ind digit factorial
    int val=123,num,sum=0;
    while(val>0){
        num=val%10;
        int fact=1;
        for(int i=num;i>0;i--){
                fact*=i;
        }
          val/=10;
          sum+=fact;
         
    }
     printf("%d\n",sum);
    

     return 0;
}