#include <stdio.h>
#define LIMITi 5
#define LIMITj 7
int main()
{
    int summary=0;
    int i=0,j=0;
    do
    {
        do
        {
            summary+=1;
            j++;
        } while (j<LIMITj);
        i++;
    } while (i<LIMITi);
    printf("Summary:%.3lf\n",summary);
    return 0;
}