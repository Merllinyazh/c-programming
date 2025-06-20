/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

//left side triangle
// int main()
// {
//     for(int i=0;i<5;i++){
        
//         for(int j=0;j<=i;j++){
//             printf("*");
//         }printf("\n");
//     }
    
// }

//right side triangle

// int main()
// {
//     for(int i=0;i<5;i++){
//         for(int s=0;s<=(5-i)-1;s++){
//             printf(" ");
//         }
//         for(int j=0;j<(i+1);j++){
//             printf("*");
//         }printf("\n");
//     }
    
// }

//pyramid
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         for(int s=0;s<=(n-i)-1;s++){
//             printf(" ");
//         }
//         for(int j=0;j<((i*2)+1);j++){
//             printf("*");
//         }printf("\n");
//     }
    
// }

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        //for(int s=0;s<=((n*2)-(i*2)-2);s++){
        for(int s=0;s<=(n-i)-1;s++){
            printf(" ");
        }
        for(int j=0;j<((i*2)+1);j++){
            if(i>0)
            printf("%d",(-j));
            else
            printf("%d",(i-j));
        }printf("\n");
    }
    
}

