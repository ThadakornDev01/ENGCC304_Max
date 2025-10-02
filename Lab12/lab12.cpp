#include <stdio.h>
#include <string.h>

struct Student {
    char Name[20];
    char ID[5];
    float ScoreSub1;
    float ScoreSub2;
    float ScoreSub3;
    float ScoreSub4;
    float ScoreSub5;
};

const char* score(float score) {
    if (score >= 80) return "A";
    else if (score >= 75) return "B+";
    else if (score >= 70) return "B";
    else if (score >= 65) return "C+";
    else if (score >= 60) return "C";
    else if (score >= 55) return "D+";
    else if (score >= 50) return "D";
    else return "F";
}

int St() {
    printf("Enter the details of 3 students:\n");
    int n = 3;
    struct Student Student[n];
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name:\n");
        scanf(" %[^\n]", Student[i].Name);
        printf("ID:\n");
        scanf("%s", Student[i].ID);
        printf("Scores in Subject 1:\n");
        scanf("%f", &Student[i].ScoreSub1);
        printf("Scores in Subject 2:\n");
        scanf("%f", &Student[i].ScoreSub2);
        printf("Scores in Subject 3:\n");
        scanf("%f", &Student[i].ScoreSub3);
        printf("Scores in Subject 4:\n");
        scanf("%f", &Student[i].ScoreSub4);
        printf("Scores in Subject 5:\n");
        scanf("%f", &Student[i].ScoreSub5);
        printf("\n");
    }
    for (int i = 0; i < n; i++) {
        float avg = (Student[i].ScoreSub1 + Student[i].ScoreSub2 + Student[i].ScoreSub3 + Student[i].ScoreSub4 + Student[i].ScoreSub5) / 5.0;
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", Student[i].Name);
        printf("ID: %s\n", Student[i].ID);
        printf("Scores: %.0f %.0f %.0f %.0f %.0f\n", Student[i].ScoreSub1, Student[i].ScoreSub2, Student[i].ScoreSub3, Student[i].ScoreSub4, Student[i].ScoreSub5);
        printf("Grades: %s %s %s %s %s\n",
            score(Student[i].ScoreSub1),
            score(Student[i].ScoreSub2),
            score(Student[i].ScoreSub3),
            score(Student[i].ScoreSub4),
            score(Student[i].ScoreSub5)
        );
        printf("Average Scores: %.1f\n\n", avg);
    }
    return 0;
}

int main() {
    St();
    return 0;
}