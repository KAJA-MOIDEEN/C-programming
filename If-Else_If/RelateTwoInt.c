#include <stdio.h>
int main()
{
    int number1,number2;
    printf("Enter two integer:");
    scanf("%d %d", &number1,&number2);
    // checks if the two integer are equl
    if(number1==number2){
        printf("Result : %d = %d ", number1,number2);

    }
    // checks if number1 is greater then number2
    else if (number1>number2){
        printf("Result : %d > %d",number1,number2);
    }
    //checks if both test expressions are false
    else{
        printf("result: %d < %d",number1,number2);


    }
    return 0;

}
