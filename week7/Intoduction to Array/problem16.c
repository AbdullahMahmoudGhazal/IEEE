#include<stdio.h>
#define SIZE 100
int main(int argc, char const *argv[])
{
    int arr[SIZE];
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);

    printf("Enter your elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Reverse Array: [");
    for (int i = size-1; i >= 0; i--)
    {
        printf("%d",arr[i]);
        if(i != 0) printf(", ");
    }
    printf("]\n");

    
    

    return 0;
}
