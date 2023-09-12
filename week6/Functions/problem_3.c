#include<stdio.h>
double mux(double nums[]);
double min(double nums[]);
int size;
int main(int argc, char const *argv[])
{
    printf("Enter the size of numbers: ");
    scanf("%i",&size);
    int nums[size];
    printf("Enter your numbers: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%.2f",&nums[i]);
    }
    printf("The Maximum number = %0.2f\n",mux(nums[size]));
    printf("The Minimum number = %0.2f\n",min(nums[size]));
    
    return 0;
}
//defiitions
double mux(double nums[])
{
    double mux_num;
    for (int i = 0; i < size; i++)
    {
        if(nums[0]>nums[i])
        nums[0]=nums[i];
        mux_num = nums[0];
    }
    return mux_num;
}
double min(double nums[])
{
   double min_num;
    for (int i = 0; i < size; i++)
    {
        if(nums[0]<nums[i])
        nums[0]=nums[i];
        min_num = nums[0];
    }
    return min_num;
}
