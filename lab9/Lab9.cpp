#include <stdio.h>
#include <stdbool.h>

// ฟังก์ชันตรวจสอบจำนวนเฉพาะ
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int size = 6;
    printf("Enter N :\n6\n"); // แสดงข้อความและค่าคงที่

    int arr[size];
    for (int i = 0; i < size; ++i) {
        printf("Enter value[%d] :\n", i);
        scanf("%d", &arr[i]);
    }

    printf("\nIndex:");
    for (int i = 0; i < size; ++i) {
        printf(" %d", i);
    }
    printf("\nArray:");
    for (int i = 0; i < size; ++i) {
        if (isPrime(arr[i])) {
            printf(" %d", arr[i]);
        } else {
            printf(" #");
        }
    }
    printf("\n");

    return 0;
}