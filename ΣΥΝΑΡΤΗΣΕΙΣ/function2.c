#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Εύρεση παραγοντικού με χρήση συνάρτησης για 10 τυχαίους αριθμούς
//χρήση συνάρτηση rand() που βρίσκεται στην βιβλιοθήκη stdlib για 
//παραγωγή τυχαίων αριθμών.

size_t paragontical(int number)
{
    size_t j=1;
    for(int i=1;i<=number;i++)
    {
        j*=i;
    }
    return j;
}

int main()
{
   srand(time(NULL));//Σπόρος παραγωγής τυχαίων αριθμών
   const int LIMIT=21;//Όριο τυχαίων αριθμών
   const int size=rand()%LIMIT;
   size_t n;
   for(int i=0;i<size;i++)
   {
       n=rand()%LIMIT;
       printf("Paragontical of number %llu:%llu\n",n,paragontical(n));
   }
   return 0;
}

