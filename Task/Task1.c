#include<stdio.h>
int a=5;
int main(){
    int b=a;
    printf("Globle Variable b = %d\n",b);
    int a=6;
    printf("Local Variable a= %d\n",a);
    return 0;
}