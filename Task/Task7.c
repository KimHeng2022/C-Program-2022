#include<stdio.h>
int main(){
    int age;
    printf("Please enter your age\n");
    scanf("%d",&age);
    if(age>=18){
        printf("You are University student",age);
    }
    else{
        printf("You are Hight school student",age);
    }
    return 0;
}