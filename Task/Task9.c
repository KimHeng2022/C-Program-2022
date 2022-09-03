#include<stdio.h>
int main(){
    int a;
    int b;
    int c;

    printf("Please input three value to compare: \n");

    printf("A= ");
    scanf("%d", &a);
    printf("B= ");
    scanf("%d", &b);
    printf("C= ");
    scanf("%d", &c);

    if(a>b&&a>c){
        printf("A= %d is the biggest!",a);
    }
    else if(b>a&&b>c){
        printf("B= %d is the biggest!",b);
    }
    else if(c>a&&c>b){
        printf("C= %d is te biggest!",c);
    }
    else{
        printf("A,B,C is the same");
    }
     
return 0;
}