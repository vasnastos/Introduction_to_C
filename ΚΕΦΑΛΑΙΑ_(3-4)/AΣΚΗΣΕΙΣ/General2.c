#include <stdio.h>

int main()
{

    
    double a,b;
    printf("Give CO2 value:");
    scanf("%lf",&a);
    printf("Give AZ value:");
    scanf("%lf",&b);
    if(a<0.35)
    {
        printf("Kathari \n");
    }
    else
    {
        printf("Molismeni \n");
    }
   
    if(b<0.17)
    {
        printf("Diaugis");
    }
    else
    {
        printf("Adiaugis");
    }
    
    return 0;
}
