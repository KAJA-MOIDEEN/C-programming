#include<stdio.h>
int main()
{
    int i , j , rows;
    printf("Enter the number of rows: ");
    scanf("%d ", &rows);
    for(i = 1;i <= rows; ++i )0{
        for(j = 1; j <= i; ++j ){
            printf("* ");

        }
        printf("\n");

    }
    return 0;
}
