#include<stdio.h>
int main()
{
    int num, originalNum, remainder, n = 0;
    float result = 0.0;

    printf("Enter a integer:");
    scanf("%d",&num);
    originalNum = num;

    // stror the number of digites of num in n
    for(originalNum = num; originalNum != 0; ++n){
            originalNum /=10;

    }
    for(originalNum=num; originalNum != 0; originalNum /= 10){
        remainder = originalNum %10;
        // store the sum of the power of individual digites in result
        result += pow(remainder,n);

    }
    // if num is equal to result, the number is an armstrong number
    if((int)result == num)
        printf("%d is an Armstrong Number.",num);
    else

        printf("%d is not an Armstrong Number.",num);
return 0;
}
