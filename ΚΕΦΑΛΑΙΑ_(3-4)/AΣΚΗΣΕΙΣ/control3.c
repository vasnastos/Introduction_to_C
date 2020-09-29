#include <stdio.h>

int main()
{

    
    int x,y,z,sum;
    printf("Give x and y :");
    scanf("%d,%d",&x,&y);
    
    printf("Give z :");
    scanf("%d",&z);
    
    sum=x+y;
    
    if(sum>z)
    {
        printf("Summary(%d) over %d detected.",sum,z);
    }
    else
    {
        printf("Equal or lower summary than %d.",z);
    }
   
    return 0;
}