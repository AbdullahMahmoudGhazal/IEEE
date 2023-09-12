/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< find sum of digits >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
#include<stdio.h>
int num;

int sum_of_digits(int num);
int main(int argc, char const *argv[])
{
    printf("Enter your number: ");
    scanf("%d",&num);
    printf("sum of digits = %d\n",sum_of_digits(num));
    return 0;
}

int sum_of_digits(int num)
{
    if(num == 0) return 0;
    
    return ((num %10) + (sum_of_digits(num/10)));
}


