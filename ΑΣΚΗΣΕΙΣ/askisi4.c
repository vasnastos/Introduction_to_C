#include <stdio.h>

int main()
{
    int a,b;
    printf("Give first number:");
    scanf("%d",&a);
    printf("Give second number:");
    scanf("%d",&b);
    int rest=a%b;
    printf("Rest is:%d",rest);
    return 0;
}