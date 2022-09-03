#include<Stdio.h>
int main(){
    int num;
    int user;
    printf("Input ur num = ");
    scanf("%d",&user);

    for(num=1; num<=user; num*2){
        num = num * 2;
        printf("%d\t",num);
    }
}