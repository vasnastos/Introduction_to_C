#include <stdio.h>

int main()
{

    int a,b,c;

    printf("Give 2 numbers \n");
    scanf("%d,%d",&a,&b);
    
    c=a*(a>b)+b*(b>a);
    
    printf("Max=%d",c);
    
    return 0;
}