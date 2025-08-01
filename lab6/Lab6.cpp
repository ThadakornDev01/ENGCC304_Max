#include <stdio.h>

int main() {
    int N;
    int input_status;

for (int valid_input = 0; valid_input == 0; ) { // valid_input เริ่ม 0, วนจนกว่าจะเป็น 1
    printf("กรุณาป้อนตัวเลข (Please enter a number): ");
    input_status = scanf("%d", &N);
    if (input_status != 1) {
        printf("ป้อนใหม่เน้อ (Not a number. Please re-enter).\n");
       if (getchar() != '\n' && getchar() != EOF);
    } else {
        valid_input = 1; // เปลี่ยนค่าเพื่อให้ออกจาก loop
        if (getchar() != '\n' && getchar() != EOF);
    }
}

    if (N % 2 == 0) {
        printf("นี้คือเลขคู่ (%d) - แสดงเฉพาะเลขคู่จาก %d ถึง 0:\n", N, N);
        for (int i = N; i >= 0; i -= 2) {
            printf("%d ", i);
        }
        printf("\n");
    } else {
        printf("นี้คือเลขคี่ (%d) - แสดงเฉพาะเลขคี่จาก 1 ถึง %d:\n", N, N);
        for (int i = 1; i <= N; i += 2) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}