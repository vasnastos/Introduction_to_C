#include <stdio.h>

int main()
{
    int sum=0;
    double avg;
    printf("List of numbers::::\n");
    for(int i=1;i<=17;i++)
    {
        sum+=i;
        printf("%d\n",i);
    }
    printf("\n");
    avg=(double)sum/17;
    printf("Sum:%d",sum);
    printf("Average:%d",avg);
    return 0;
}