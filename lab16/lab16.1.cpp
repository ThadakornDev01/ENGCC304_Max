#include <stdio.h>

int main() {
    int arr[7] = {15, 7, 25, 3, 73, 32, 45};
    int n = 7;

    // แสดงข้อมูลเดิม
    printf("Old Series : ");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(", ");
    }
    printf("\n");

    // เรียงข้อมูลจากน้อยไปมาก (Bubble Sort)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }

    // แสดงข้อมูลใหม่
    printf("New Series : ");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(", ");
    }
    printf("\n");

    // หาตำแหน่งของ 32
    for (int i = 0; i < n; i++) {
        if (arr[i] == 32) {
            printf("Pos of 32 : %d\n", i);
            break;
        }
    }

    return 0;
}