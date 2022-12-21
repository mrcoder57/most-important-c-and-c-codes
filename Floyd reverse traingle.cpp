#include <stdio.h>
int main() {
    int rows, i, j, number =10;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++) {
        for (j = i; j >=1; j--) {
            printf("%d ", number);
            number--;
        }
        printf("\n");
    }
    return 0;
}
