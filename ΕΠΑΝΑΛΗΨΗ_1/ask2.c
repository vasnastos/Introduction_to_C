#include <stdio.h>

int main()
{
    int x,y;
    float phliko,ypoloipo;

    printf("DOSE TON DIAIRETEO KAI TON DIAIRETH\n");
    scanf("%d %d",&x,&y);

    phliko=(float)x/(float)y;
    ypoloipo=x%y;
    
    printf("PHLIKO: %f\n",phliko);
    printf("YPOLOIPO: %f\n",ypoloipo);

    return 0;
}