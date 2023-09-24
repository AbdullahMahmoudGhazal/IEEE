#include<stdio.h>
#define SIZE 100
int main(int argc, char const *argv[])
{
    int arr[SIZE][SIZE];
    int size, det = 0;
    int det1 = 0, det2 = 0, det3 = 0;
    printf("Enter the size of nxn matrix (2x2 or 3x3): ");
    scanf("%d",&size);

    printf("Enter your elements: ");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    if (size==2)
    {
       // 2x2       
        det = (arr[0][0] * arr[1][1]) - (arr[0][1] * arr[1][0]);
    }
    else if(size == 3)
    {
        // 3x3   
        det1 = (arr[0][0]*(arr[1][1]*arr[2][2]-arr[1][2]*arr[2][1]));   
        det2 = (arr[0][1]*(arr[1][0]*arr[2][2]-arr[1][2]*arr[2][0]));
        det3 = (arr[0][2]*(arr[1][0]*arr[2][1]-arr[1][1]*arr[2][0]));
         
        det =  det1 - det2 + det3 ;
    }
    else
    printf("so hard to find the determinand!! ");

    printf("Your Array: \n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
        printf("\n");
        printf("|Array| = %d",det);
  
    


    
    return 0;
}
