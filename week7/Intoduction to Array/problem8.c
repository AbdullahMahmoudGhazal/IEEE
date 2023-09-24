#include<stdio.h>
#define SIZE 100
int main(int argc, char const *argv[])
{
    int first_arr[SIZE], second_arr[SIZE];
    int size;
    printf("Enter the size of elements: ");
    scanf("%d",&size);

    printf("Enter your elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&first_arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        second_arr[i] = first_arr[i];
    }
    
    printf("fisrt array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d",first_arr[i]);
        if(i != size-1)
        printf(", ");
        if(i == size-1)
        printf("\n");
    }
    printf("second array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d",second_arr[i]);
        if(i != size-1)
        printf(", ");
        if(i == size-1)
        printf("\n");
    }
    
    
    
    return 0;
}
