#include <stdio.h>
#include <math.h>

// ฟังก์ชันตรวจสอบว่าเป็นเลขอาร์มสตรองหรือไม่
int isArmstrong(int num) {
    int original = num;
    int sum = 0;
    int digits = 0;
    int temp = num;

    // นับจำนวนหลัก
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    // คำนวณผลรวมของเลขแต่ละหลักยกกำลังจำนวนหลัก
    while (temp != 0) {
        int digit = temp % 10;
        sum += (int)pow(digit, digits);
        temp /= 10;
    }

    return sum == original;
}

int main() {
    int num;
    printf("Enter Number:\n");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("Pass.\n");
    } else {
        printf("Not Pass.\n");
    }
    return 0;
}