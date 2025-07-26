#include <stdio.h>

int main(){
    char n[11];
    int w,m;
    
    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%s", n);
    printf("Input the working hrs: ");
    scanf("%d", &w);
    printf("Salary amount/hr: ");
    scanf("%d", &m);
    
    printf("Expected Output:\n");
    printf("Employees ID = %s\n",n);
    printf("Salary = U$ %.2f\n",w*m*1.0);

    return 0;
}