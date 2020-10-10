#include <stdio.h>
int main()
{
    int plithos;
    int pn;
    int pen;
    printf("Give number of drivers with 4 penalties:");
    scanf("%d",&plithos);
    int summary;
    for(int i=0;i<plithos;i++)
    {
        summary=0;
        for(int j=0;j<4;j++)
        {
            do
            { 
                printf("Give rate of first penalty:");
                scanf("%d",&pen);
                summary+=pen;
            }while(pen<5 || pen>40);
        }
        if(summary>40)
        {
            printf("Driver's Licence suspend for three months\n");
        }
        else if(summary>60)
        {
            printf("Driver's Licence suspend for one year\n");
        }
        else
        {
            printf("Just a fee!!!!\n");
        }
    }
    return 0;
}