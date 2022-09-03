#include<stdio.h>
int main(){
    int khmer, math, physic;
    int total;

    printf("Please input ur khmer score : ");
    scanf("%d",&khmer);
    printf("Please input ur math score :");
    scanf("%d",&math);
    printf("Please input ur physic score : ");
    scanf("%d",&physic);
    total = (khmer + math + physic)/3;
    printf("Total = %d ", total);
    
    if(total>=50){
        printf("Congrats, You are pass!");
    }
    else {
        printf("Please prepare for re-exam, You're fail!"); 
    }
}