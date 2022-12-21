#include <stdio.h>
int main() {
    int rows, i, j, number =2;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i=rows; i>0; i--) {
        for (j =0; j<rows; j++) {
            printf("%d\t", number);
            number++;
        }
        printf("\n");
    }
    return 0;
}
