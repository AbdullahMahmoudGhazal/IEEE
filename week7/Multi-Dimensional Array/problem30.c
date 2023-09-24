#include<stdio.h>
#define SIZE 100
int main(int argc, char const *argv[])
{
    int arr[SIZE][SIZE];
    int size, sum = 0;
    printf("Enter the size of nxn matrix: ");
    scanf("%d",&size);

    printf("Enter your elements: ");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
           scanf("%d",&arr[i][j]);
        }
        
    }
    //for 
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
           if(i+j==size-1)
            sum+=arr[i][j];
        }
        
    }
    
    printf("Sum of Diagonal elements: %d\n",sum);
    

    return 0;
}
