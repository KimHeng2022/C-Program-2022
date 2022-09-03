#include<stdio.h>
int main(){
    int a, b;
    int total;

    printf("Input a number =");
    scanf("%d",&a);
    printf("Input b number =");
    scanf("%d",&b);
    
    printf("total= %d\n", total);
    if ( total%2 == 0 ){
        printf("The number is even");
    }
    else{
        printf("THe number is odd");
    }
}