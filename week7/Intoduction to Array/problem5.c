#include<stdio.h>
#include<limits.h>
#define SIZE 100

int main(int argc, char const *argv[])
{
    int arr[SIZE];
    int size, max, scnd_max;
    max = scnd_max = INT_MIN;
    printf("Enter the size of elements: ");
    scanf("%d",&size);

    printf("Enter your elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int j = 0; j < size; j++)
    {
        if (arr[j] > max)
        {
            scnd_max = max;
            max = arr[j];
        }
        else if(arr[j] < max & arr[j] > scnd_max)
        {
            scnd_max = arr[j];
        }
    }

    printf("1st element: %d\n",max);
    printf("2nd element: %d\n",scnd_max);

    
    return 0;
}

