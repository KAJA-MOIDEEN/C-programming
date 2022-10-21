#include <stdio.h>
int main()
{
    float num1;
    double num2;
    double num3;
    printf("Enter a Number\n");
    scanf("%f",&num1);
    printf("Enter Another Number\n");
    scanf("%lf",&num2);

    printf("Num1 %f\n",num1);
    printf("Num2 %lf\n",num2);

    num3 = num1+num2;

    printf(" Sum of The Two Number is %lf\n",num3);
    return 0;

}
