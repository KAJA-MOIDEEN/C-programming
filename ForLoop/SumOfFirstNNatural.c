#include <stdio.h>
int main()
{
    int num , count,sum = 0;
    printf("Enter a positive number\n ");
    scanf("%d",&num);
    //for loop terminates when num is less then count
    for(count = 1; count <= num; ++count)
    {

        sum+=count;

    }

    printf("sim = %d ",sum);
}
