//6. Write a function to calculate factorial of a number.(TSRS)
int factorial (int );
#include<stdio.h>
int main()
{
    int n,fac;
    printf("Enter a number : ",&n);
    scanf("%d",&n);
    fac = factorial(n);
    printf("Factorial of given number is : %d ",fac);
    return 0;
}
int factorial(int m)
{
    int f=1;
    for(int i = m; i>=1; i--)
    f = f*i;
    return f;

}
