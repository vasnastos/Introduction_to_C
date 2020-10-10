#include <iostream>
#define LENGTH 30
int main()
{
   double salary;
   double keepsalary;
   double summary=0;
   double totalfee=0;
   printf("**********************************************************************************************\n");
   for(int i=0;i<LENGTH;i++)
   {
       do
       {
           printf("Give Salary:");
           scanf("%lf",&salary);
       } while (salary<=0 || salary>3000);
       if(salary<=700.0)
       {
           keepsalary=0;
       }
       else if(salary<=1000.0)
       {
           keepsalary=0.15*salary;
       }
       else if(salary<1700.0)
       {
           keepsalary=0.3*salary;
       }
       else
       {
           keepsalary=0.4*salary;
       }
       print("Salary:%.3lf\tKEEP SALARY:%.3lf\n",salary,keepsalary);
       printf("Salary after Fee:%lf\n",salary-keepsalary);
       summary+=keepsalary;
       totalfee+=salary-keepsalary;
   }
   printf("**********************************************************************************************\n");
   printf("Total taxes:%.3lf\n",summary);
   printf("Total fee:%.3lf\n",totalfee);
   return 0;
}