#include <stdio.h>

void countOddEven(int arr[], int n, int *oddCount, int *evenCount) {
    *oddCount = 0;
    *evenCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            (*evenCount)++;
        } else {
            (*oddCount)++;
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int oddCount, evenCount;

    countOddEven(arr, n, &oddCount, &evenCount);

    printf("Odd count: %d, Even count: %d\n", oddCount, evenCount);

    return 0;
}