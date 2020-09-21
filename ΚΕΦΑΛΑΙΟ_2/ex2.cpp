#include <stdio.h>

int main()
{
    int n1,n2;
    printf("Give the first number:");
    scanf("%d",&n1);
    printf("Give the second number:");
    scanf("%d",&n2);
    printf("%d+%d=%d\n",n1,n2,n1+n2);
    printf("%d-%d=%d\n",n1,n2,n1-n2);
    printf("%d*%d=%d\n",n1,n2,n1*n2);
    printf("%d/%d=%.3f\n",n1,n2,(float)(n1)/n2);
    return 0;
}