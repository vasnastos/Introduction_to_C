#include <stdio.h>
#include <windows.h>

int main()
{
   SetConsoleOutputCP(65001);
   int a;
   printf("Give number:");
   scanf("%d",&a);
   if(a>0)
   {
       printf("ΘΕΤΙΚΟΣ");
   }
   else if(a<0)
   {
       printf("ΑΡΝΗΤΙΚΟΣ");
   }
   else
   {
       printf("ΜΗΔΕΝ");
   }
   return 0;
}