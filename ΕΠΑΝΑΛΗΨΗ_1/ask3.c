#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    float s,u;
    const float g=9.81;

    t=1;
    s=((double)1/2)*(g*pow(t,2));
    u=g*t;

    printf("GIA t=1sec H APOSTASH EINAI %.2f KAI H TAXYTHTA EINAI %.2f\n",s,u);

    t=5;
    s=((double)1/2)*(g*pow(t,2));
    u=g*t;

    printf("GIA t=5sec H APOSTASH EINAI %.2f KAI H TAXYTHTA EINAI %.2f\n",s,u);

    return 0;
}