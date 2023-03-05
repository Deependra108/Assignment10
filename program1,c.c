//1. Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
float Area (int);
int  main()
{
    float a,x;
    printf("Enter the radius of a circle: ");
    scanf("%f",&x);
    a=Area(x);
    printf("Area of the circle is : %f",a);
    return 0;
}
float Area(int r)
{
    float b;
    b = 3.14*r*r;
    return b;
}
