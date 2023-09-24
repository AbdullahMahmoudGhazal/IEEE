#include <stdio.h>
#define SIZE 100
int main(int argc, char const *argv[])
{
    int arr[SIZE];
    int size, num, pos;

    printf("Enter your size: ");
    scanf("%d", &size);

    printf("Enter your elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter your number to insert: ");
    scanf("%d", &num);

    printf("Enter the position of number: ");
    scanf("%d", &pos);

    if (pos > size + 1 || pos <= 0)
    {
        printf("INVALID POSITION!!\N");
    }
    else
    {
        for (int i = size; i >= pos; i--)
        {
            arr[i] = arr[i - 1];
        }

        arr[pos - 1] = num;
        size++;

        printf("Array: ");
        for (int i = 0; i < size; i++)
        {
            printf("%d", arr[i]);
            if (i != (size - 1) && i != pos - 1)
                printf(", ");

            if (i == pos - 2)
                printf("<");
            if (i == pos - 1)
                printf(">, ");
        }
    }

    return 0;
}
