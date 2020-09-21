#include <stdio.h>

int main()
{
    int num1;
    char c1;
    printf("Give integer:");
    scanf("%d",&num1);
    fflush(stdin);
    printf("Give character:");
    scanf("%c",&c1);
    printf("Character with distance:%d from character:%c is:%c\n",num1,c1,c1+num1);
    return 0;
}