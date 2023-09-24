#include<stdio.h>
#define SIZE 10
int main(int argc, char const *argv[])
{
    int arr1[SIZE][SIZE];
    int arr2[SIZE][SIZE];
    int arr_result[SIZE][SIZE];
    int size;
    printf("Enter the size of two nxn matrices: ");
    scanf("%d",&size);
    
    printf("Enter First Array elements: ");
    for (int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("Enter Second Array elements: ");
    for (int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    
    for (int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            arr_result[i][j] = arr1[i][j] - arr2[i][j];
        }
    }

    for (int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            printf("%d ",arr_result[i][j]);
        }
        printf("\n");
    }
    

    
    

    return 0;
}
