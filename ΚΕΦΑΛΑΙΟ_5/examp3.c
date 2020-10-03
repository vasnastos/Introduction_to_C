#include <stdio.h>
#include <windows.h>
#define s 5

int main()
{
    SetConsoleOutputCP(65001);
    int sqm;
    double prc;
    for(int i=0;i<s;i++)
    {
        printf("Δώσε τετραγωνικά οικοπέδου:");
        scanf("%d",&sqm);
        printf("Δώσε συνολική τιμή οικοπέδου:");
        scanf("%lf",&prc);
        double persqr=prc/sqm;
        if(persqr>500)
        {
           printf("Τιμή ανα τετραγωνικό:%.3lf\t Ακριβό\n",persqr);
        }
        else if(persqr<250)
        {
           printf("Τιμή ανα τετραγωνικό:%.3lf\t Φθηνό\n",persqr);
        }
        else
        {
            printf("Τιμή ανα τετραγωνικό:%.3lf\t Κανονικό\n",persqr);
        }
    }
    return 0;
}