#include <stdio.h>
#include <string.h>
#include <ctype.h>

// ฟังก์ชันเปรียบเทียบ palindrome แบบไม่สนตัวพิมพ์เล็ก-ใหญ่
int isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;
    while (left < right) {
        // เปรียบเทียบแบบไม่สนตัวพิมพ์เล็ก-ใหญ่
        if (tolower(str[left]) != tolower(str[right])) {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}

int main() {
    char word[101];
    printf("Enter word:\n");
    scanf("%100s", word);

    if (isPalindrome(word)) {
        printf("Pass.\n");
    } else {
        printf("Not Pass.\n");
    }
    return 0;
}