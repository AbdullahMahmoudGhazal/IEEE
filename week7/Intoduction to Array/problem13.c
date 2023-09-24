#include<stdio.h>
#define SIZE 100
int main(int argc, char const *argv[])
{
    int arr[SIZE];
    int size, count = 0;

    printf("Enter the size: ");
    scanf("%d",&size);

    printf("Enter your elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; i++)
        {
            if(arr[i] == arr[j])
            count++;
        }
        
    }

    printf("number of dublicated elemnts: %d", count);

    
    return 0;
}
