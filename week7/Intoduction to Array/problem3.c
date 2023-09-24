#include<stdio.h>
#define SIZE 100
int main(int argc, char const *argv[])
{
    float arr[SIZE];
    int size;
    float sum =0.0;
    printf("Enter the size: ");
    scanf("%d", &size);

    printf("Enter your elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%f",&arr[i]);
    }
    for (int j = 0; j < size; j++)
    {
        sum += arr[j];
    }
    printf("sum of elements: %0.2f",sum);
    
    
    return 0;
}
