#include <stdio.h>
#include <math.h>

int main()
{
    int number;
    printf("Give number:");
    scanf("%d",&number);
    double function=0;
    for(int i=1;i<=number;i++)
    {
        function+=(double)(i)/pow(2.0,i);
    }
    printf("Function Result:%.3lf\n",function);
    return 0;
}