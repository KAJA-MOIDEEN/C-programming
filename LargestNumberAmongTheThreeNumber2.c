#include <stdio.h>
int main()
{
    double n1,n2,n3;
    printf("Enter three diffrent number : ");
    scanf("%lf %lf %lf",&n1, &n2, &n3);

    // outer if statement
    if(n1>=n2){
        // inner if ... else
        if (n1>=n3)

            printf("%.2f is The Largest Number.",n1);
        else
            printf("%.2f is The Lagest Number. ", n3);


    }
    else {
        // inner is else

        if (n2 >= n3)
            printf("%.2f is The Largest Number.  ", n2);

        else
            printf("%.2f is Tne Largest Number", n3);

    }
    return 0;

}
