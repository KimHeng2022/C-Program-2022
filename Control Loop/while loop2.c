#include<stdio.h>
int main(){
    int num = 1;
    int sum = 0;
    while(num<=10){
        sum= sum + num;
        printf("Sum = %d\n",sum);
        num++;
    }
    printf("Total sum = %d\n", sum);
    return 0;
}