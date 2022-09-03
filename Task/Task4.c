#include<stdio.h>
int main(){
    int ID;
    char name[10];
    char gender;
    float math;

    printf("=======STUDENT INFORMATION======= \n");
    printf("Please input your ID =");
    scanf("%d", &ID);
    printf("Please input your name =");
    scanf("%s", &name);
    printf("Please input your gender =");  
    scanf("%s", &gender);
    printf("Please input your math score =");
    scanf("%f", &math);
    printf("====================================");
    return 0;
}