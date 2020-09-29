#include <stdio.h>

int main ()
{

    int x,y;
    double s,d,sum,mo;

    printf("Give 2 numbers : \n");
    
    scanf("%d,%d",&x,&y);
    
    s= x<<y;
    d= x&y;
    printf("s= %lf , d= %lf \n",s,d);
    
    sum=s+d;
    printf("sum= %lf \n",sum);
    
    mo= (x+y+s+d)/4.0;
    printf("Mesos oros: %lf",mo);
    
    return 0;
}
