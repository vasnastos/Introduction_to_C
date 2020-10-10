#include <stdio.h>
#include <math.h>
int main()
{
    for(int i=100;i<=200;i++)
    {
        int dec=(i%100)/10;
        int summary=pow((i/100),3)+pow(dec,3)+pow(((i%100)%10),3);
        if(summary==i)
        {
            printf("Summary of the Cube of digits give the number!!!Number:%d\n",i);
        }
    }
    return 0;
}