#include <stdio.h>

int main()
{
    float podia,metra;

    printf("DOSE MHKOS SE PODIA\n");
    scanf("%f",&podia);

    metra=podia*0.3048;
    
    printf("TA %f PODIA ISOUNTAI ME %f METRA\n",podia,metra);
    
    return 0;
}