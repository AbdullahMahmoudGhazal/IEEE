#include<stdio.h>
#define SIZE 100
int main(int argc, char const *argv[])
{
    int arr[SIZE];
    int size;

    printf("Enter the size of array: ");
    scanf("%d",&size);

    printf("Enter your %d elements: ",size);
    for ( int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Your elements are: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d",arr[i]);
        if(i!=(size-1))
        {
            printf(", ");
        }
    

        
    }
    
    

    return 0;
}
