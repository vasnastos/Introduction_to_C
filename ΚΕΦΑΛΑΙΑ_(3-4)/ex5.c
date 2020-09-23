#include <stdio.h>

int main()
{
    int year,numberofchildren;
    printf("Give years of experience:");
    scanf("%d",&year);
    printf("Give number of children:");
    scanf("%d",&numberofchildren);
    int epidoma=0;
    if(year>=0 && year<=10)
    {
       if(numberofchildren>=0 && numberofchildren<3)
       {
           epidoma=70;
       }
       else if(numberofchildren<=4)
       {
           epidoma=90;
       }
       else
       {
           epidoma=30*numberofchildren;
       }
       
    }
    else
    {
        if(numberofchildren>=0 && numberofchildren<3)
       {
           epidoma=100;
       }
       else if(numberofchildren<=4)
       {
           epidoma=150;
       }
       else
       {
           epidoma=50*numberofchildren;
       }
    }
    printf("Years:%d\tChildren:%d\tExtra Money:%d\n",year,numberofchildren,epidoma);
    return 0;
}