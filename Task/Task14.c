#include<stdio.h>
#include<math.h>
int on();
int off();
int main(){
    int temp;
    srand(time(NULL));
    temp = rand() %50 + 10;
    printf("Your room temperature is %d c", temp);
    if(temp<=18){
        int AC = off();
    }
    if(temp>=28){
        int AC = on();
    }
}
int off(){
    printf("\nAC Off");
}
int on(){
    printf("\nAC On");
    return on;
}