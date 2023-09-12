/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< check even or odd >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
#include<stdio.h>
int num;
void chek_even_odd(int num);
int main(int argc, char const *argv[])
{
    printf("Enter your num: ");
    scanf("%d",&num);
    chek_even_odd(num);
    return 0;
}
void chek_even_odd(int num)
{
    if (num%2)
        printf("Odd"); // nonzero result
    else
        printf("Even"); // zero result
}