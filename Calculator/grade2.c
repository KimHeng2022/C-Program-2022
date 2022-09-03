#include<stdio.h>
int main(){
    int bonusforold;
    int bonusfornew;
    int salary;
    int total;
    printf("Program for calculate worker salary:\n");

    printf("Please input ur salary:");
    scanf("%d", &salary);

    if(salary>=1500){
        total=salary+1000;
        printf("Total salary=%d",total);
    }
    else{
        total=salary+250;
        printf("Total salary=%d",total);
    }
}