#include <stdio.h>
int main()
{
    int over3000=0;
    double sum=0.0;
    double salary;
    int counter=0;
    do
    {
        printf("Give Salary:");
        scanf("%lf",&salary);
        if(salary>30000){
            over3000++;
        }
        counter++;
        sum+=salary;  
    }while(salary!=0.0);
    printf("Summary:%.3lf\n",sum);
    printf("Average Salary:%.3lf\n",sum/counter);
    printf("Over 300000$ salary:%d\n",over3000);
    return 0;
}