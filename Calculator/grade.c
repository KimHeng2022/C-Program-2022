#include<stdio.h>
int main(){
    int math, khmer, english;
    int total;
    printf("Program for calculate your grade!\n");

    printf("Please input your Math score: ");
    scanf("%d", &math);
    printf("Please input your Khmer score: ");
    scanf("%d", &khmer);
    printf("Please input your English score: ");
    scanf("%d", &english);

    total= (math + english + khmer)/3;
    printf("Total= %d\n",total);
     
    if(total>90){
        printf("Congrats, your grade is A");
    }
    else if(total>=80){     
        printf("Congrats, your grade is B");
    }
    else if(total>70){
        printf("Congrats, your grade is C");
    }
    else if(total>60){
        printf("Congrats, your grade is D");
    }
    else if(total>50){
        printf("Congrats, your grade is E ");
    }
    else{
        printf("Congrats, your grad is F");
    }

return 0;
}
