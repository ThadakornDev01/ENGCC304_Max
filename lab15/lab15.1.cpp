#include <stdio.h>
#include <ctype.h>

int countWords(FILE *fp) {
    int count = 0;
    int inWord = 0;
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        if (!isspace(ch)) {
            if (!inWord) {
                count++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
    }
    return count;
}

int main() {
    char filename[100];
    printf("Enter file name:\n");
    scanf("%s", filename);

    FILE *fp = fopen(filename, "r");
    if (!fp) {
        printf("Cannot open file.\n");
        return 1;
    }

    int total = countWords(fp);
    fclose(fp);

    printf("Total number of words in '%s' : %d words\n", filename, total);
    return 0;
}