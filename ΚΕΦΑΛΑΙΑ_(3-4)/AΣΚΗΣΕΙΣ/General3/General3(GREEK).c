#include <stdio.h>
#include <windows.h>

int main(void)
{
    SetConsoleOutputCP(65001);
    double a,b,c,d;
    printf("ΔΩΣΕ ΠΡΩΤΟ ΒΑΘΜΟ:");
    scanf("%lf",&a);
    printf("ΔΩΣΕ ΔΕΥΤΕΡΟ ΒΑΘΜΟ:");
    scanf("%lf",&b);
    printf("ΔΩΣΕ ΤΡΙΤΟ ΒΑΘΜΟ:");
    scanf("%lf",&c);
    printf("ΔΩΣΕ ΤΕΤΑΡΤΟ ΒΑΘΜΟ:");
    scanf("%lf",&d);
    double avg=(a+b+c+d)/4;
    printf("\nΑΠΟΤΕΛΕΣΜΑ:::\n");
    if(avg>=5.0)
    {
        printf("ΠΡΟΑΓΕΤΑΙ ΜΕ ΜΕΣΟ ΟΡΟ:%.2lf",avg);
    }
    else
    {
        printf("ΑΠΟΤΥΧΙΑ ΜΕ ΜΕΣΟ ΟΡΟ:%.2lf",avg);
    }
    return 0;
}