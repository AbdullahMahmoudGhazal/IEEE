#include<stdio.h>
#define SIZE 100
int main(int argc, char const *argv[])
{
    int size, temp, check;
    int arr[SIZE];

    printf("Enter the size: ");
    scanf("%d",&size);

    printf("Enter your elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("For Ascending Ordre Enter: [1]\nFor descending Ordre Enter: [0]");
    scanf("%d",&check);
    if(check)
    {
    //Ascending
    for (int i = 0; i < size; i++)
    {
        for (int j=i+1; j<size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    printf("Ascending ordre: [");
    for (int i = 0; i < size; i++)
    {
        printf("%d",arr[i]);
        if(i != (size - 1)) printf(", ");
    }
    printf("]\n");
    }
    else    
     //descending
    for (int i = 0; i < size; i++)
    {
        for (int j=i+1; j<size; j++)
        {
            if (arr[i] < arr[j])//5 4 3 2 1
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    printf("Descending ordre: [");
    for (int i = 0; i < size; i++)
    {
        printf("%d",arr[i]);
        if(i != (size - 1)) printf(", ");
    }
    printf("]\n");
    return 0;
}
