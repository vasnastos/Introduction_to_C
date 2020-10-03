#include <stdio.h>

int main()
{
    char an;
    double base,height;
    do
    {
        printf("Give base of triangle:");
        scanf("%lf",&base);
        printf("Give height of triangle:");
        scanf("%lf",&height);
        printf("triangle with base:.3lf  and height:%.3lf  has area:%.3lf\n",base,height,base*height);
        printf("insert another triangle metrics:");
        fflush(stdin);
        scanf("%c",&an);
    } while (an=='Y' || an=='y');
    /*  
    Execution with while loop
    while(1)
    {
        printf("Give base of triangle:");
        scanf("%lf",&base);
        printf("Give height of triangle:");
        scanf("%lf",&height);
        printf("triangle with base:.3lf  and height:%.3lf  has area:%.3lf\n",base,height,base*height);
        printf("insert another triangle metrics:");
        fflush(stdin);
        scanf("%c",&an);
        if(an!='y' && an!='Y') {break;}
    }
    */
   return 0;
}