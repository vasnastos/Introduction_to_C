#include <stdio.h>

int main()
{

    int a,b,c,max;
    
    printf("Give first number:");
    scanf("%d",&a);
    printf("Give second number:");
    scanf("%d",&b);
    printf("Give third number:");
    scanf("%d",&c);
    max=a;
    if(b>max)
    {
        max=b;
    }
    if(c>max)
    {
        max=c;
    }
    printf("Max= %d",max);
    
    return 0;
}