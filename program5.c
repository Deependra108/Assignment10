//5. Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
int main()
{
    int n;
    printf("Enter how many first n odd natural number you want to be printed :");
    scanf("%d",&n);
    Odd_natural( n );
    return 0;
}
void Odd_natural( int x)
{
    printf("first %d Odd Natural numbers are :\n",x);
    for( int i=1; i<=x; i++)
        printf("%d ",2*i-1);
}
