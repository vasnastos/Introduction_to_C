#include <stdio.h>

int intcmpr(int a,int b)
{
    return a>b;
}

int main()
{
    int a=19,b=20;
    int res=intcmpr(a,b);
    if(res==1)
    {
        printf("a upper from b\n");
    }
    else
    {
        printf("a lower from b\n");
    }
    return 0;
}

