#include<math.h>
#include<stdio.h>
int main()
{
    double base , exp, result;
    printf("Enter a Base Number");
    scanf("%lf", &base);
    printf("Enter an Exponent:");
    scanf("%lf",&exp);
    //calculates the poewr
    result = pow(base,exp);

    printf("%.1lf^%.1lf = %.2lf",base,exp,result);
    return 0;
}
