#include <stdio.h>

int main()
{
    float a,b,c;
    printf("Give first try:");
    scanf("%f",&a);
    printf("Give second try:");
    scanf("%f",&b);
    printf("Give third try:");
    scanf("%f",&c);
    float avg=(a+b+c)/3.0;
    if(avg>=8.0)
    {
        printf("qualified!!!");
    }
    else
    {
        printf("disqualified");
    }
    return 0;
}