#include<stdio.h>
int main(){
    char operator;
    int num1, num2, total;
    printf("Program for calculate the number based on operator!\n");
    printf("Please choose any operator ( + -  * / ) : ");
    //scanf("%s",&operator);
    operator = getchar();

    switch(operator){
        case'+':
            printf("You choose addition operator!\n");
            printf("Input the two value that you want to add: \n");
            scanf("%d%d", &num1, &num2);
            total= num1 + num2;
            printf("%d + %d = %d\n", num1, num2, total);
            break;
        case'-':
            printf("You choose subtract operator!\n");
            printf("Input the two value that you want to subtract: \n");
            scanf("%d%d", &num1, &num2);
            total= num1 - num2;
            printf("%d - %d = %d\n", num1, num2, total);
            break;
        case'*':
            printf("You choose multiply operator!\n");
            printf("Input the two value that you want to multiply: \n");
            scanf("%d%d", &num1, &num2);
            total= num1 * num2;
            printf("%d * %d = %d\n", num1, num2, total);
            break;
        case'/':
            printf("You choose divide operator!\n");
            printf("input the two value that you want to divide: \n");
            scanf("%d%d", &num1, &num2);
            total= num1 / num2;
            printf("%d / %d = %d\n", num1, num2 , total);
            break;
        default :
            printf("Wrong operator!\n");
    }
    return 0;
}
