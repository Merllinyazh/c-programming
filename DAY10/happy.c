/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

   #include <stdio.h>
    int sumofsq(int num){
        int sum=0;
        int digit;
        while(num>0){
            digit=num%10;
            sum+=digit*digit;
            num/=10;
        }
        return sum;
    }
int main()
{
   int num;
   scanf("%d", &num);
   while(1){
       num=sumofsq(num);
       if(num==1){
           printf("Happy");
           break;
       } 
       if(num==4){
           printf("Not Happy");
           break;
       } 
       
       
   }
   
} 
