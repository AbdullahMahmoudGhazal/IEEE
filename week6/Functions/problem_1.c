/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< find cube of a number >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
#include<stdio.h>
#include<math.h>
int num;
double cube(double num);
int main()
{
    printf("Enter your num: ");
    scanf("%i",&num);
    printf("%d^3 = %0.2f\n",num,cube(num));
    return 0;
}
double cube(double num)
{
    return pow(num,3);
}


