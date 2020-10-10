#include <stdio.h>
int main()
{
    int number;
    int countpositive=0,countnegative=0,counteven,countpar=0,zero=0;
    while(1) //for(;;)
    {
      printf("Give number(exit[-999]):");
      scanf("%d",&number);
      if(number==-999) {break;}
      if(number>0) {countpositive++;}
      if(number<0) {countnegative++;}
      if(number==0) {zero++;}
      if(number%2==0) {counteven++;}
      if(number%2!=0) {countpar++;}
      /*
        if(number>0) {countpositive++;}
        else if(number<0) {countnegative++;}
        else {zero++;}
      if(number%2==0) {counteven++;}
      else(number%2!=0) {countpar++;}
      */
    }
    printf("Positive Numbers:%d\n",countpositive);
    printf("Negative numbers:%d\n",countnegative);
    printf("Even numbers:%d\n",counteven);
    printf("Par numbers:%d\n",countpar);
    printf("Zeros:%d\n",zero);
    return 0;
}