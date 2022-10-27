#include<Stdio.h>
int main()
{
    int low,high,i,flag,temp;
    printf("Enter two Number(intervals):");
    scanf("%d %d ", &low,&high);
    //swap number if low is greather then high
    if(low > high)
    {
        temp = low;
        low = high;
        high = temp;

    }
    printf("Prime number between %d and %d are : ", low, high);
    while (low < high)
    {
        flag = 0;
        // ignore number less then 2
        if (low<= 1){
            ++low;
            continue;

        }
        for (i = 2;i<= low/2;++i ){
                if(low % i == 0){
                    flag=1;
                    break;
                }
        }
        if (flag == 0)
            printf("%d ", low);
        printf("%d ", low);
        ++low;


    }
    return 0;

}
