#include <stdio.h>

int main()
{
    char c1,c2,c3,c4;
    printf("Give first character:");
    scanf("%c",&c1);
    fflush(stdin);
    printf("Give second character:");
    scanf("%c",&c2);
    fflush(stdin);
    printf("Give third character:");
    scanf("%c",&c3);
    fflush(stdin);
    printf("Give fourth character:");
    scanf("%c",&c4);
    printf("Characters:%c-%c-%c-%c",c1,c2,c3,c4);
    return 0;
}