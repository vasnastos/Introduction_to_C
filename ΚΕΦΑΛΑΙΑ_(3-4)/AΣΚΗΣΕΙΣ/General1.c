#include <stdio.h>
int main()
{

    double c,f;
    
    printf("Give temperature in celsius:");
    scanf("%lf",&c);
    
    f=(c*(9.0/5.0))+32;
    
    printf("Fahrenheit = %.2lf",f);
    
    return 0;
}