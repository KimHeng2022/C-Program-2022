#include<stdio.h>
int main(){
    int operator;
    float d;
    float r;
    int b;

    start:

    printf("\nProgram for calculate money exchange!\n");
    printf("Please choose:\n");
    printf("1 = Dollar to Real\n");
    printf("2 = Real to Dollar\n");
    printf("3 = Bart to Real\n");
    printf("4 = Real to Bart\n");

    printf("\nYour choice = ");
    scanf("%d",&operator);

    switch(operator)
    {

        case 1:
            printf("\nYou choose Dollar to Real!\n");
            printf("Please input ur money that u want to change = ");
            scanf("%f",&d);
            r = d * 4000;
            printf("%.2f Dollar = %0.f Real\n",d,r);
            goto start;
            break;
        case 2:
            printf("\nYou choose Real to Dollar!\n");
            printf("Please input ur money that u want to change = ");
            scanf("%f",&r);
            d = r / 4000;
            printf("%0.f Real = %.2f Dollar\n",r,d);
            goto start;
            break;
        case 3:
            printf("\nYou choose Bart to Real!\n");
            printf("Please input ur money that u want to change = ");
            scanf("%d",&b);
            r = b * 100;
            printf("%d Bart = %0.f Real\n",b,r);
            goto start;
            break;
        case 4:
            printf("\nYou choose Real to Bart!\n");
            printf("Please input ur money that u want to change = ");
            scanf("%f",&r);
            b = r / 100;
            printf("%0.f Real = %d Bart\n",r,b);
            goto start;
            break;
    }
    return 0;
}