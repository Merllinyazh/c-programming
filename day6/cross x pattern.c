/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   for(int i=0;i<5;i++){
       for(int j=0;j<5;j++){
           if(i==j){
               printf("%d",i+1);
           }else if((i+j)==5-1){
               printf("%d",j+1);
           }else
           printf(" ");
           
    }
    printf("\n");
   }
}