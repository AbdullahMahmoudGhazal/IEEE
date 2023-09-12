/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< find diameter, circumference and area >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
#include<stdio.h>
//macros
#define PI 3.14
//declarations
double getDiameter(double Radius);
double getCircumference(double Radius);
double getArea(double Radius);

int Radius;
int main(int argc, char const *argv[])
{
    printf("Enter the Radius: ",Radius);
    scanf("%d",&Radius);
    printf("The diameter is = %0.2f\n",getDiameter(Radius));
    printf("The circumference is = %0.2f\n",getCircumference(Radius));
    printf("The Area is = %0.2f\n",getArea(Radius));
    return 0;
}
double getDiameter(double Radius)
{
    return 2 * Radius;
}
double getCircumference(double Radius)
{
    return 2*PI*Radius;
}
double getArea(double Radius)
{
    return PI*Radius*Radius;
}

