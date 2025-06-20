/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
//call by reference

//   void hi(int *pt){
//       *pt+=1;
//   }
//   void hello(char *pt){
//       *pt+=1;
//   }
//   int main(){
//       int a=10;
//       char ch='D';
//       hi(&a);
//       hello(&ch);
//       printf("%d",a);
//       printf("%c",ch);
//       return 0;
//   }
// call by value

void add(int a,int b) {
	printf("%d\n",++a);
	printf("%d\n",a+b);
}
int main() {
	int a=10,b=9;
	add(a,b);
	printf("%d,%d",a,b);
}

