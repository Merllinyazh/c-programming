#include <stdio.h>

int main() {
    float a[2][2], det, inv[2][2];
    int i, j;

    printf("Enter 2x2 matrix elements:\n");
    for(i=0; i<2; i++)
        for(j=0; j<2; j++)
            scanf("%f", &a[i][j]);

    det = a[0][0]*a[1][1] - a[0][1]*a[1][0];

    if(det == 0)
        printf("Inverse doesn't exist (Determinant is 0).\n");
    else {
        inv[0][0] = a[1][1]/det;
        inv[0][1] = -a[0][1]/det;
        inv[1][0] = -a[1][0]/det;
        inv[1][1] = a[0][0]/det;

        printf("Inverse of matrix:\n");
        for(i=0; i<2; i++) {
            for(j=0; j<2; j++)
                printf("%0.2f ", inv[i][j]);
            printf("\n");
        }
    }

    return 0;
}