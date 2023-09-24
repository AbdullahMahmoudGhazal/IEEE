#include <stdio.h>
#define SIZE 100
int main(int argc, char const *argv[])
{
    int arr1[SIZE][SIZE];
    int arr2[SIZE][SIZE];
    int size;
    printf("Enter the size of nxn matrix : ");
    scanf("%d", &size);

    printf("Enter your elements: ");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            arr2[j][i] = arr1[i][j];
        }
    }

    int check = 1;
     for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr1[i][j] != arr2[i][j])
            {
                check = 0;
                break;
            }
            
        }
    }
    if (check == 1)
    {
        printf("Your array is Symmetric: \n");
        for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size; j++)
                {
                    printf("%d ",arr1[i][j]);
                    
                }
                printf("\n");
            }

    }
    else
    printf("Not Symmetric Array!!\n");
    

    return 0;
}
