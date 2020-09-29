#include <stdio.h>

int main()
{

    int a,b,c,d,e,sum=0;
   
    printf("Give 5 numbers :");
    scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e);
    
    if(a>=-3 && a<=3)
    {
        sum++;
    }
   
    if(b>=-3 && b<=3)
    {
        sum++;
    }
    
    if(c>=-3 && c<=3)
    {
        sum++;
    }
    
    if(d>=-3 && d<=3)
    {
        sum++;
    }
   
    if(e>=-3 && e<=3)
    {
        sum++;
    }

    printf("Sum= %d",sum);
    
    return 0;
}