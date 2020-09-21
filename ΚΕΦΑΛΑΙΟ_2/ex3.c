#include <stdio.h>

int main(void)
{
    int days;
    int months;
    int years;
    printf("Give day:");
    scanf("%d",&days);
    printf("Give month:");
    scanf("%d",&months);
    printf("Give year:");
    scanf("%d",&years);
    printf("Date is:%d/%d/%d\n",days,months,years);
    int countdays=months*30+days-1;
    printf("Total days from the begging of the year:%d",countdays);
    return 0;
}