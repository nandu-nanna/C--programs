#include <stdio.h>
void printHalfDiamond(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = rows - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printHalfDiamond(rows);

    return 0;
}
