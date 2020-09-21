#include <stdio.h>

int main()
{
    char c1,c2,c3;
    printf("Give first character:");
    scanf("%c",&c1);
    fflush(stdin);
    printf("Give second character:");
    scanf("%c",&c2);
    fflush(stdin);
    printf("Give third character:");
    scanf("%c",&c3);
    int num1=c1,num2=c2,num3=c3;
    printf("Summary of numeric values of characters %c-%c-%c is:%d\n",c1,c2,c3,num1+num2+num3);
    return 0;
}