#include <stdio.h>
#include <limits.h>

int secondSmallest(int arr[], int n) {
    if (n < 2) {
        return INT_MAX; // Not enough elements
    }

    int first = INT_MAX, second = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] < first) {
            second = first;
            first = arr[i];
        } else if (arr[i] < second && arr[i] != first) {
            second = arr[i];
        }
    }

    return second;
}

int main() {
    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int secondSmallestElement = secondSmallest(arr, n);
    if (secondSmallestElement == INT_MAX) {
        printf("Not enough elements to find the second smallest.\n");
    } else {
        printf("Second smallest element: %d\n", secondSmallestElement);
    }

    return 0;
}