#include<stdio.h>
int add(int, int); //Function Declaration

int main(){
    int m=20, n=30, sum;
    sum= add(m,n); //Function Call
    printf("Sum is %d\n", sum);
    int x=20, y=40, sume;
    sume= add(x,y); //Function Call
    printf("Sum is %d", sume);
}

int add(int a, int b){ //Function Definition
    return a+b;
}