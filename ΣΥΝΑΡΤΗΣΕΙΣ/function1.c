#include <stdio.h>

void print(int a)
{
    printf("^^^^^^^^^^^^^^^^^^^^^^\n");
    printf("\tPrint function detected\n");
    printf("\tA=%d\n",a);
    printf("^^^^^^^^^^^^^^^^^^^^^^\n");
}

int pow(int number,int v)
{
    int pl=1;
    for(int i=1;i<=v;i++)
    {
        pl*=number;
    }
    return pl;
}

int main()
{
    int a=16;
    print(a);
    int b=pow(a,4);
    print(b);
    return 0;
}
