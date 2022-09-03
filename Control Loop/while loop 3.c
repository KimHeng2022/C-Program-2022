#include<stdio.h>
int main(){
    int num = 1;
    int sum = 0;
    while(num<=10){
        if(num%2){
        num++;
        }
        else{
            sum= sum + num;
            printf("sum = %d\n",sum);
            num++;
        }
    }
    printf("Total num = %d",sum);
}