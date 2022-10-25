#include<stdio.h>
int main()
{
    double num;
    printf("Enter a number");
    scanf("%lf",&num);

    if (num < 0.0){
        printf("You entered negative number.");
        }
    else if (num > 0.0){
        printf("you entered positive number.");
        }
    else
        printf("You entered Zero");
    return 0;

}
