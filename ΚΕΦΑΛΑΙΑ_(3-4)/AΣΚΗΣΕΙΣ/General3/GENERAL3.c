#include <stdio.h>

int main(void)
{
    double a,b,c,d;
    printf("Give first grade:");
    scanf("%lf",&a);
    printf("Give second grade:");
    scanf("%lf",&b);
    printf("Give third grade:");
    scanf("%lf",&c);
    printf("Give fourth grade:");
    scanf("%lf",&d);
    double avg=(a+b+c+d)/4;
    printf("\nResults:::\n");
    if(avg>=5.0)
    {
        printf("Pass with average:%.2lf",avg);
    }
    else
    {
        printf("Fail with average:%.2lf",avg);
    }
    return 0;
}