#include <stdio.h>

int main()
{
    int N;
    printf("Give number:");
    scanf("%d",&N);
    double sum=0.0;
    for(int i=1;i<N;i++)
    {
      sum+=1.0/i;
    }
    printf("sum:%.3lf\n",sum);
    return 0;
}