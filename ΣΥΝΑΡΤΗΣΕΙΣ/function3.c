#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIMIT 100
#define SIZE 20

size_t random_summary()
{
    int summary=0;
   for(int i=0;i<20;i++)
   {
      summary+=rand()%LIMIT;
   }   
   return summary;
}

int main()
{
    srand(time(NULL));
    printf("Print random Summary five times\n");
    printf("**********************************************\n");
    for(int i=1;i<=5;i++)
    {
        printf("Iteration %d:%llu\n",i,random_summary());
    }
    return 0;
}

