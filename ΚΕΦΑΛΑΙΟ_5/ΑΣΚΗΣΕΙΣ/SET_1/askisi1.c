#include <stdio.h>
#define Metrics 11
int main()
{
    int gender;
    int male=0,female=0,error=0;
    int i=1;
    while(i<=Metrics)
    {
        printf("Select gender(1/Male,2/female):");
        scanf("%d",&gender);
       if(gender==1) {male++;}
       else if(gender==2) {female++;}
       else {error++;}
       i++;
    }
    double malepr=((male*1.0)/Metrics)*100.0;
    double femalepr=(female*1.0/Metrics)*100.0;
    double errorpr=(error*1.0/Metrics)*100.0;
    printf("Male:%.3lf%%\n",malepr);
    printf("Female:%.3lf%%\n",femalepr);
    printf("Error:%.3lf%%\n",errorpr);
    return 0;
}