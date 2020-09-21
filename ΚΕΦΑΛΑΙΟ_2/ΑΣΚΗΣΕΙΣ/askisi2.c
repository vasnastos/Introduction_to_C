#include <stdio.h>
#define COUNT 3

int main()
{
    float n1,n2,n3;
    printf("Give first number:");
    scanf("%f",&n1);
    printf("Give second number:");
    scanf("%f",&n2);
    printf("Give third number:");
    scanf("%f",&n3);
    float average=(n1+n2+n3)/COUNT;
    printf("Average among the three inserted numbers:%.3f\n",average);
    return 0;
}