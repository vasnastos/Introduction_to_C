#include <stdio.h>

int function(int a)
{
    if(a>10)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int b=11;
    printf("%d",function(b));
    return 0;
}