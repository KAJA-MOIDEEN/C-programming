#include <stdio.h>
int main()
{
    int dividend , divisor , quotient , remainder;
    printf("Enter Divident:");
    scanf("%d",&dividend);
    printf("Enter Divisor:");
    scanf("%d",&divisor);

    // Computes quotient
    quotient = dividend / divisor;

    // computes remainder

    remainder = dividend % divisor;
    printf("Quotient = %d\n " , quotient);
    printf("Remainder = %d\n " , remainder);
    return 0;


}
