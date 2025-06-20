/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>

int main()
{
	int num;
    bool prime=true;
    scanf("%d",&num);
	for (int i = 2; i <= num; i++) {
		if (num % i == 0) {
		    prime=false;
		    break;
	}
	if (prime){
	    printf("prime");
	}else{
	    printf("no");
	}
	
	}
}
