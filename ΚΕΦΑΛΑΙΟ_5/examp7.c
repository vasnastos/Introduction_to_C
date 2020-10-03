#include <stdio.h>

int main()
{
    int cntpos=0,cntneg=0;
    int number;
    while(1)
    {
       printf("Give number:");
       scanf("%d",&number);
       if(number==0) {break;}
       if(number>0) {cntpos++;}
       else {cntneg++;}
    }
    printf("Percent of positive numbers:%.3lf\n",(cntpos*1.0/(cntpos+cntneg))*100.0);
    printf("Percent of negative numbers:%.3lf\n",(cntneg*1.0/(cntpos+cntneg))*100.0);
    return 0;
}