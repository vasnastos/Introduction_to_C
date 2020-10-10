#include <iostream>
#define SIZE 10

int main()
{
    char gender;
    double salary;
    int noch;
    double epidoma;
    for(int i=0;i<SIZE;i++)
    {
        printf("Give gender:");
        scanf("%c",&gender);
        printf("Give Salary:");
        scanf("%lf",&salary);
        printf("Give number of children:");
        scanf("%d",&noch);
        if(gender=='M')
        {
            if(noch==1)
            {
                epidoma=20;
            }
            else if(noch==2)
            {
                epidoma=50;
            }
            else
            {
                epidoma=120;
            }
        }
        else
        {
            if(noch==1)
            {
              epidoma=30;
            }
            else if(noch==2)
            {
                epidoma=80;
            }
            else
            {
                epidoma=150;
            }
        }
        printf("\n*********************************************************************************************************************************\n");
        printf("Gender:%c\tNumber of Children:%d\tSALARY:%.3lf\tEXTRA SALARY:%.3lf\n",gender,noch,salary,epidoma);
        printf("*********************************************************************************************************************************\n");
    }
    return 0;
}