#include<stdio.h>
int sum();
int main(){
    int total = sum();
    printf("Your total is %d", total);
}
int sum(){
    int total=0;
    int user, a;
    printf("PLease input ur num = ");
    scanf("%d",&user);

    for(a=1; a<=user;a++){
        total = total + a;                                                  
    }
    return total;
}