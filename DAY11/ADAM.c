/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int reverse(int num){
    int rev=0;
    while(num>0){
    rev=(rev*10)+(num%10);
    num/=10;
}
return rev;
}


int main()
{
  int num;
  scanf("%d",&num);
  int square=num*num;
  int reves=reverse(num);  
  int revesq=reves*reves;
  if(revesq==reverse(square)){
      printf("Adam");
  }
}
