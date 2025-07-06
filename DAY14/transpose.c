// traspose of matrix 

#include <stdio.h>
int main()
{
 int i,j,r,c;
 printf("Enter row");
 scanf("%d",&r);
 printf("Enter column");
 scanf("%d",&c);
 int m1[r][c],res[r][c];
 printf("Enter value for Matrix I");
 for(i=0;i<r;i++)
 {
     for(j=0;j<c;j++)
     {
         scanf("%d",&m1[i][j]);    
         }
 }
  for(i=0;i<r;i++)
 {
     for(j=0;j<c;j++)
     {
         res[i][j]=m1[j][i];
     }
     printf("\n");
    }
printf("Resultant Matrix is  \n ");
  for(i=0;i<r;i++)
 {
     for(j=0;j<c;j++)
     {
         printf("%d",res[i][j]);
     }
     printf("\n");
    }
    
}    
    