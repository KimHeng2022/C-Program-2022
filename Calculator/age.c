#include<stdio.h>
int main(){
    int a;
    int b, c;
    printf("Please input your brother age\n");
    scanf("%d",&a);
    printf("Please input you or your friend age\n");
    scanf("%d",&b);
    c= a-b;
    if(c<0){
        printf("You are older than his brotherr",c);
    }
    else if(c>0){
        printf("You are younger than your brother",c);
    }


    printf("You are younger than your brother %d years old",c);  
    return 0;
}