#include <stdio.h>

int main()
{

    int a,b,c;
    double d,e;

    printf("Give the number of sudents that passed the exam :");
    scanf("%d",&a);

    printf("Give the number of students that did not pass the exam :");
    scanf("%d",&b);

    c=a+b;

    d=(double)a*100/(double)c; 
    e=((double)b/c)*100;

    printf("Succesfull: %.3lf %% \nUnsuccesfull: %.3lf %%",d,e);
    
    return 0;
}