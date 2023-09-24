#include<stdio.h>
#define SIZE 100
int main(int argc, char const *argv[])
{
    int arr1[SIZE][SIZE];
    int arr2[SIZE][SIZE];
    int size, check;
    printf("Enter the size of two nxn matrices: ");
    scanf("%d",&size);

    printf("Enter First Array elements: ");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0;j < size; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
        
    }
    printf("Enter Second Array elements: ");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0;j < size; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
        
    }
    check = 1; //at equality
    for (int i = 0; i < size; i++)
    {
        for (int j = 0;j < size; j++)
        {
            if(arr1[i][j]!=arr2[i][j])
            check=0;
            break;
        }
        
    }

    if (check)
    {
        printf("arr1 equal arr2\n");
    }
    else
    {
        printf("arr1 NotEqual arr2\n");
    }
    

    

    return 0;
}
