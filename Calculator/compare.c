#include<stdio.h>
int main(){
    int a, b;
    printf("Input a=");
    scanf("%d",&a);
    printf("Input b=");
    scanf("%d",&b);

    if(a>=b){
        if(a>b){
            printf("The first number %d > %d The second number:\n", a,b);
        }
        if(a==b){
            printf("The first number %d = %d The second number:\n", a,b);
        }
    }
    else{
        printf("The first number %d < %d The second number:\n", a,b);
    }
}