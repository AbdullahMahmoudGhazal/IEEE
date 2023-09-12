/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< check palindrome number >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
#include<stdio.h>
#include<math.h>
int num; 

int revers(int num);
int ispalindrome(int num);

int main(int argc, char const *argv[])
{
    printf("Enter your number: ");
    scanf("%d",&num);
    if(ispalindrome(num))
        printf("%d <==> %d : is palindrome\n",num,revers(num));
    else
        printf("%d <==> %d : is NOT palindrome\n",num,revers(num));


    return 0;
}
int ispalindrome(int num)
{
    if(num == revers(num))
        return 1;
    else
        return 0;

}

int revers(int num)
{
    int digits = (int)log10(num);
    if(num==0) return 0;

    return ((num%10) * (pow(10,digits)) + revers(num/10));

}
