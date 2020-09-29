#include <stdio.h>

int main()
{

    double a,b;
    
    printf("Give 2 numbers :");
    scanf("%lf,%lf",&a,&b);
    
    if(a>b)
    {
        printf("Max = %lf",a);
    }
    else if(b>a)
    {
        printf("Max = %lf",b);
    }
    else
    {
        printf("Equal numbers");
    }
    
    return 0;
}
