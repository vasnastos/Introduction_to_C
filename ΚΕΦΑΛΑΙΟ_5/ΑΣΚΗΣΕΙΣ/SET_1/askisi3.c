#include <stdio.h>

int main()
{
    char an;
    double grade;
    int i=0;
    double max,min,sum=0;
    while(1)
    {
        printf("Give grade:");
        scanf("%lf",&grade);
        if(i==0)
        {
            max=grade;
            min=grade;
        }
        else
        {
            if(grade>max)
            {
                max=grade;
            }
            if(grade<min)
            {
                min=grade;
            }
        }
        sum+=grade;
        printf("Continue(Y/y in order to continue):");
        scanf("%c",&an);
        if(an!='Y' && an!='y') {break;}
        i++;
    }
    printf("Summary:%.3lf\n",sum);
    printf("Average:%.3lf\n",sum/i);
    printf("Max Grade:%.3lf\n",max);
    printf("Min:%.3lf\n",min);
    return 0;
}