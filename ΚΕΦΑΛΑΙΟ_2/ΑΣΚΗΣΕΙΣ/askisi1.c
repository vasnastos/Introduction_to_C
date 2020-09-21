#include <stdio.h>
#include <math.h>

int main()
{
    float v,t;
    printf("Give speed of wind:");
    scanf("%f",&v);
    printf("Give temperature:");
    scanf("%f",&t);
    double w=91.4-(0.474677-0.020425*v+0.303107*sqrt(v))+(91.4-t);
    printf("Speed of wind:%.3f\n Celsius",v);
    printf("Temperature:%.3f\n Km/h",t);
    printf("wind factor:%.4lf\n",w);
}