#include<stdio.h>
int main()
{
    int i , j;
    char input, alphabet = 'A';

    printf("Enter an Uppercase character you want to print in the last Row:");
    scanf("%c",&input);
    for(i = 1; i <= (input - 'A' + 1); ++i ){
        for(j = 1; j <= i ; ++j){
            printf("%c ",alphabet);

        }
        ++alphabet;

        printf("\n");

    }
    return 0;
}
