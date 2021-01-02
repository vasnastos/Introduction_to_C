#include <stdio.h>
#define SIZE 20

double average(int a,int b)
{
    int num;
    if(a>b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    int sum=0;
    int c=0;
    for(int i=a;i<=b;i++)
    {
      if(i%2==0)
      {
          sum+=i;
          c++;
      }
    }
    return (double)sum/c;
}

int main()
{
    int a,b;
    printf("Give lower bound:");
    scanf("%d",&a);
    printf("Give upper bound:");
    scanf("%d",&b);
    printf("Average of even numbers:",average(a,b));
    return 0;
}