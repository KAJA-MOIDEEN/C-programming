#include<stdio.h>
void main()
{
    double n1 , n2 , n3;
    printf("Enter three Diffrent number");
    scanf("%lf %lf %lf \n", &n1,&n2,&n3);

    //if n1 is grater then both n2 and n3 , n1 is largest
    if ( n1 >= n2 && n1 >=n3)
    {


        printf("%.2f is the largest number. ",n1);
    //if n2 is grater then both n1 and n3 , n2 is largest
    }if (n2 >= n1  && n2 >= n3){
        printf("%.2f is the largest number.",n2);}
      //if n3 is grater then both n1 and n2 , n3 is largest
    if (n3 >= n1  && n3 >= n2){
        printf("%.2f is the largest number.",n3);}


}
