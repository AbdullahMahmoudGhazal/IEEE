#include<stdio.h>
int num;
unsigned int factorial(int num);
int main(int argc, char const *argv[])
{
    printf("print your number: ");
    scanf("%d",&num);
    printf("%d! = %d\n",num,factorial(num));
    return 0;
}
unsigned int factorial(int num)
{
    if(num == 0) 
    return 1;
    else
    return (num * factorial(num - 1));
}
