#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 20
#define LIMIT 100

int MAX(int a,int b)
{
    if(a>=b)
    {
        return a;
    }
    else
    {
        return b;
    }
    
}

int main()
{
   srand(time(NULL));
   int num=rand()%LIMIT;
   int previous=num;
   int max=num;
   for(int i=1;i<SIZE;i++)
   {
     num=rand()%LIMIT;
     max=MAX(previous,num);
     previous=num;
   }
   printf("Max number of %d numbers:%d\n",SIZE,max);
   return 0;
}