#include <stdio.h>

int main()
{
    printf("\tCash Register 3.0 SoftWare\t\n");
    printf("**************************************************\n");
    int quantity;
    double pr;
    double total=0.0;
    while(1)
    {
        printf("Give price of product:");
        scanf("%lf",&pr);
        if(pr==0) {break;}
        printf("Give quantity of product:");
        scanf("%d",&quantity);
        total+=quantity*pr;
    } 
    printf("**************************************************\n");
    printf("Total cost of product:%.3lf\n",total);
    return 0;
}