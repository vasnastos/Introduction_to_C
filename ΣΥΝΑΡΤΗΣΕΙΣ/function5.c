#include <stdio.h>

int fun()
{
    return 4.9;
}

int fun1()
{
    return 'a';
}

int main()
{
    printf("%d\t%d",fun(),fun1());
    return 0;
}

