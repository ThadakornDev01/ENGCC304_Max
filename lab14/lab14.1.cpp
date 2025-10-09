#include <stdio.h>

#define SIZE 100

int findMin(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] < min) min = arr[i];
    return min;
}

int findMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max) max = arr[i];
    return max;
}

int main() {
    int arr[SIZE], n = 0, temp;
    printf("Enter value:\n");
    while (scanf("%d", &temp) == 1) {
        arr[n++] = temp;
        if (getchar() == '\n') break;
    }

    printf("Index: ");
    for (int i = 0; i < n; i++)
        printf("%d ", i);
    printf("\nArray: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n\nMin : %d\nMax : %d\n", findMin(arr, n), findMax(arr, n));
    return 0;
}