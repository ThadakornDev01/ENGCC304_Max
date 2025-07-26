#include <stdio.h>

int main(){
    int score;
    printf("กรอกคะแนนที่ได้ : ");
    scanf("%d", &score);
    
    if (score > 80) {
        printf("คุณได้เกรด A โคตรเก่ง!!\n");
    }else if (score > 75){
        printf("คุณได้เกรด B+ \n");
    }else if (score > 70){
        printf("คุณได้เกรด B \n");
    }else if (score > 65){
        printf("คุณได้เกรด C+ \n");
    }else if (score > 60){
        printf("คุณได้เกรด C \n");
    }else if (score > 55){
        printf("คุณได้เกรด D+ \n");
    }else if (score > 50){
        printf("คุณได้เกรด D \n");
    }else if (score >= 0){
        printf("คุณได้เกรด F \n");
    }else{
        printf("กรอกคะแนนไม่ถูกต้อง\n");
    }       
    return 0;
}