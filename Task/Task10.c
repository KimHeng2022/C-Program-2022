#include<stdio.h>
int main(){
    float spend;
    float discount;
    float pay;
    
    printf("Please input ur total spend: ");
    scanf("%f",&spend);
    
    if(spend>=1000){
        printf("Congrats, You got discount 15 percent!\n");
        discount = (spend * 15) / 100;
        pay = spend - discount;
        printf("pay = %.2f $",pay);
    }
    else if(spend>=800){
        printf("Congrats, You got discount 10 percent!\n");
        discount = (spend * 10) / 100;
        pay = spend - discount;
        printf("pay = %.2f $",pay);
    }
    else if(spend>=400){
        printf("Congrats, You got discount 5 percent!\n");
        discount = (spend * 5) / 100;
        pay = spend - discount;
        printf("pay = %.2f $",pay);
    }
    else if(spend>=200){
        printf("Congrats, You got discount 2 percent!\n");
        discount = (spend * 2) / 100;
        pay = spend - discount;
        printf("pay = %.2f $",pay); 
    }
    else{
        printf("Congrats, You got discount 0 percent!\n");
        discount = (spend * 0) / 100;
        pay = spend - discount;
        printf("pay = %.2f $",pay); 
    }

return 0;
}