/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int swap(int a,int b){
    
    a=a^b;
    b=a^b;
    a=a^b;
    return a;
}
int main(){
    int a=5,b=7;
    printf("%d",swap(a,b));
    return 0;
    
}