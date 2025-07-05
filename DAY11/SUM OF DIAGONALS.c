#include <stdio.h>

int main()
{
    int a[3][3], i, j, k = 0;  

    printf("Enter matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(i == j) {  
                k = k + a[i][j];
            }
        }
    }

    printf("The sum of diagonal elements is %d\n", k);

    return 0;
}
