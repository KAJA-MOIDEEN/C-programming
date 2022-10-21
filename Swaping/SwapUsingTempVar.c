#include <stdio.h>
int main()
{
    double first , second, temp;
    printf("Enert first number:");
    scanf("%lf",&first);
    printf("Enert second number:");
    scanf("%lf",&second);

    //value first assigned to temp

    temp = first;

    //value of second is assigned to first

    first = second;

    //value of temp (initial value of first) is assigned to second
    second = temp;

    printf("\n After swapping, first number = %.3lf\n", first);
    printf("\n After swapping, second number = %.3lf\n", second);

    return 0;





}
