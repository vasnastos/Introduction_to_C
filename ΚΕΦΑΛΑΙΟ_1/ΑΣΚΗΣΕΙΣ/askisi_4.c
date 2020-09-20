#include <stdio.h>

int main()
{
    //Δήλωση μεταβλητών.
    int val1=10,val2=15,val3=17,val4=29;
    
    //Υπολογισμός αθροίσματος.
    int sum=val1+val2+val3+val4; 

    //Υπολογισμός μέσου όρου.
    float average=sum/4.0;

    //Υπολογισμός τετραγώνου αθροίσματος
    int square=sum*sum;

    //Εκτύπωση αποτελεσμάτων
    // \n->αλλαγή γραμμής  %.3f->εκτύπωση δεκαδικού με ακρίβεια 3 ψηφία.
    printf("Numbers List::\nNumber1:%d\nNumber2:%d\nNumber3:%d\nNumber4:%d\n\n",val1,val2,val3,val4);
    printf("Sum:%d\nAverage:%.3f\nSquare:%d\n",sum,average,square);
    return 0;
}