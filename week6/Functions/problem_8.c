#include <stdio.h>
#include <math.h>

int armstrongNum(int num);
void get_Armstrong(int start, int end);
int main(int argc, char const *argv[])
{
    int start, end, num;
    printf("Enter your start:");
    scanf("%d", &start);
    printf("Enter your end:");
    scanf("%d", &end);
    printf("Armstrong numbers are: ");
    get_Armstrong(start, end);

    return 0;
}

int armstrongNum(int num)
{
    int temp, lastdigit;
    int sum = 0;
    int digits = (int)log10(num);
    temp = num;
    while (temp != 0)
    {
        lastdigit = temp % 10;
        sum += pow(lastdigit, digits);
        temp /= 10;
    }
    if (num == sum)
        return 1;
    else
        return 0;
}

void get_Armstrong(int start, int end)
{
    int temp;
    if (start > end)
    {
        temp = start;
        start = end;
        end = temp;
    }
     while(start <= end)
    {
        if(armstrongNum(start)) 
        {
            printf("%d, ", start);
        }
        
        start++;
    }
}
