#include<stdio.h>
int main(){
    int even=0;
    int odd=0;
    int num=1;
    int i=1;

    printf("Program for calculate total odd and even number!\n");
    printf("Please input ur number=");
    scanf("%d",&num);

    while(i<=num){
        if(i%2==0){
            even++;
            i++;
        }
        else{
            odd++;
            i++;
        }
    }
    printf("total even = %d\n",even);
    printf("total odd = %d\n",odd);
    return 0;
}