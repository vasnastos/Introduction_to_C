#include <stdio.h>
#include <windows.h>

//Δήλωση συνάρτησης
double convert(double temp);

int main()
{
  double temp;
  for(int i=1;i<=20;i++)
  {
    printf("Give Temperature:");
    scanf("%lf",&temp);
    printf("Temperature from Celsius to Fahrenheit:%.3lf\n",convert(temp));
    Sleep(1000);
  }
  return 0;
}

double convert(double temp)
{
   return ((double)9/5.0)+(temp+32);
}