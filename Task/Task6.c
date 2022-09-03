#include<stdio.h>
int main()
{
    int plat_num;
    char car_own_name[6];
    printf("Please input plat number = ");
    scanf("%d", &plat_num);
    printf("Please input ur car name =");
    scanf("%s", &car_own_name);
    printf("Your car plat number is = %d\n", plat_num);
    printf("Your car name is = %s\n", car_own_name);
    return 0;
}
