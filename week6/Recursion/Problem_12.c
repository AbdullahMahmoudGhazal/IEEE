/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< print even or odd numbers in given range >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
#include<stdio.h>
int start;
int end;
//declaration
void ptrint_even_odd(int start, int end);

int main(int argc, char const *argv[])
{
    printf("Enter your start: ");
    scanf("%d", &start);
    printf("Enter your end: ");
    scanf("%d", &end);

    if(start%2)
        printf("Odd numbers from %d to %d => ",start,end);
    else
        printf("Even numbers from %d to %d => ",start,end);

    ptrint_even_odd(start,end);
    return 0;   
}
// definition
void ptrint_even_odd(int start, int end)
{
    if(start > end) return;
    
    printf("%d",start);
    // comma arrangnent
    if(!(start==end||start == end-1) )
        printf(", ");

    ptrint_even_odd(start + 2, end);
}
