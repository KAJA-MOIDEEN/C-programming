#include <stdio.h>
int main()
{
    int i;
    double number, sum = 0.0;
    for(i=1; i<=10;++i)
    {
        printf("Enter the value %d:", i);
        scanf("%lf",&number);
        // if the enter a negative number, break the loop
        if (number < 0.0){
            break;
        }
        sum += number;

    }
    printf("sum = %lf", sum);
    return 0;
}
