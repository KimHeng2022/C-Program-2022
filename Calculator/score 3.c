#include<stdio.h>
int main(){
    float math, khmer, physic;
    
    printf("Please input ur math score=");
    scanf("%f", &math);
    printf("Please input ur khmer score=");
    scanf("%f", &khmer);
    printf("Please input ur physic score=");
    scanf("%f", &physic);

    float total= math+khmer+physic;
    float avg= total/3;

    printf("Total score= %.1f",total);
    printf("Average score= %.1f",avg); 
}