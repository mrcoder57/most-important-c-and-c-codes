#include<stdio.h>
int main() {
    int A[10][10], B[10][10], Result[10][10];
    int i, j, k;
    int sum=0;
    
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 3; j++) {
        printf("\n Enter the %d %d elements of first matrix : \n",i,j);
            scanf("%d", &A[i][j]);
        }
    }
   
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 3; j++) {
        printf("\n Enter the %d%d elements of Second Matrix : \n",i,j);
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 3; j++) {
            for (k = 1; k <= 3; k++) {
                sum+= A[i][k] * B[k][j];
            Result[i][j]=sum;
            sum=0;
            }
        }
    }


    printf("\n\n The Resultant of  Matrix Multiplication is \n\n");
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 3; j++) {
            printf("\t%d", Result[i][j]);
        }
        printf("\n");
    }
    return (0);
}