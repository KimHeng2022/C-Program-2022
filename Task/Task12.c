#include<stdio.h>
int main(){
    int a,user,com,total;
    printf("Input ur num = ");
    scanf("%d",&user);

    for(a=1;a<=user;a++){
        for(com=1;com<=a;com++){
            //total = a * com;
            printf("*\t",com);
        }
    printf("\n");
    }
return 0;
}