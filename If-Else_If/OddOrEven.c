#include <stdio.h>
int main()
{
    int number;
    printf("Enter an integer:");
    scanf("%d",&number);
    // true if the remainder is 0

    if(number%2==0)
    {
        printf("%d is an even integer",number);
    }
    else{
        printf("%d is an Odd integer",number);

    }
    return 0;

    }
