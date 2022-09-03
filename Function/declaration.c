#include<stdio.h>
int main(){
    int a=10, b=15, sum, min;
    sum = total(a,b);
    printf("Sum = %d\n", sum);
    min = minus(a,b);
    printf("Sum = %d\n", min);
}
int minus(int a, int b){
    int min = a - b;
    return min;
}
int total(int a, int b){
    int sum = a + b;
    return sum;
}