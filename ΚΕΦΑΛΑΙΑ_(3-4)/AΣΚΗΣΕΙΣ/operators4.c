#include <stdio.h>

int main()
{

    int a,b,c;

    printf("Give 2 numbers :");
    
    scanf("%d,%d",&a,&b);
    
    c=a&b;
    
    printf("Result : %d",c);
    
    return 0;
}
