#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001);
    int a;
    printf("ΔΩΣΕ ΑΡΙΘΜΟ:");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("ΑΡΤΙΟΣ");
    }
    else
    {
        printf("ΠΕΡΙΤΤΟΣ");
    }
    return 0;
}