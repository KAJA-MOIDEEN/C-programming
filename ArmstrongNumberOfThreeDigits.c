#include<stdio.h>
int main()
{
    int num, originalNum, remainder, result = 0;
    printf("Enter a three-digit integer:");
    scanf("%d",&num);
    originalNum = num;

    while(originalNum != 0)
    {
        // reminder contains the last digit
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        // reminder last digit from the orignal number
        originalNum /= 10;

    }
    if(result==num)
        printf("%d is an Armstrong Number.",num);
    else

        printf("%d is not an Armstrong Number.",num);
return 0;
}
