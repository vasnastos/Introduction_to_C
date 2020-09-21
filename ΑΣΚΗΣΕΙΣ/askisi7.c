#include <stdio.h>

int main()
{
    int num1;
    float num2;
    printf("Give integer:");
    scanf("%d",&num1);
    printf("Give float number:");
    scanf("%f",&num2);
    float sum=num1+num2;
    printf("Sum between integer:%d and float:%f is:%f",num1,num2,sum);
    return 0;
}