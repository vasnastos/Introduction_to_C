#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    float fx;

    printf("DOSE x\n");
    scanf("%d",&x);

    fx=sqrt((4*pow(x,3)+3*pow(x,2)+2*x+1)/5);

    printf("f(x)=%f\n",fx);

    return 0;
}