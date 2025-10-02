#include <stdio.h>

int main() {
    float Junior_Programmer = 20000;
    float Mid_Level_Programmer = 35000;
    float Senior_Programmer = 50000;
    int pos_index;
    int years, projects;
    float base_salary, bonus_years = 0, bonus_projects = 0, salary;

    printf("เลือกตำแหน่งงาน (1=Junior Programmer, 2=Mid-Level Programmer, 3=Senior Programmer): ");
    scanf("%d", &pos_index);
    if (pos_index < 1 || pos_index > 3) {
        printf("Error: ไม่พบตำแหน่งงาน\n");
        return 1;
    }
    printf("จำนวนปีที่ทำงาน: ");
    scanf("%d", &years);
    printf("จำนวนโปรเจคที่สำเร็จในปีนี้: ");
    scanf("%d", &projects);

    // กำหนดเงินเดือนฐาน
    if (pos_index == 1) {
        base_salary = Junior_Programmer;
    } else if (pos_index == 2) {
        base_salary = Mid_Level_Programmer;
    } else {
        base_salary = Senior_Programmer;
    }

    // คำนวณโบนัสจากปีที่ทำงาน
    if (years < 1) {
        bonus_years = 0;
    } else if (years <= 3) {
        bonus_years = base_salary * 0.10;
    } else if (years <= 5) {
        bonus_years = base_salary * 0.15;
    } else {
        bonus_years = base_salary * 0.20;
    }

    // คำนวณโบนัสจากโปรเจค
    if (projects > 5) {
        bonus_projects = base_salary * 0.05;
    }

    salary = base_salary + bonus_years + bonus_projects;

    printf("\nฐานเงินเดือน: %.2f บาท\n", base_salary);
    printf("โบนัสจากปีที่ทำงาน: %.2f บาท\n", bonus_years);
    printf("โบนัสจากโปรเจคที่สำเร็จ: %.2f บาท\n", bonus_projects);
    printf("เงินเดือนรวม: %.2f บาท\n", salary);
    return 0;
}