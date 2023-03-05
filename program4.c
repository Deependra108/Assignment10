// Write a function to print first n Natural Numbers.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter How many natural number you want to be printed : ");
    scanf("%d",&n);
    Natural(n);
    return 0;
}
void Natural (int m)
{
    printf(" first %d Natural Nubmers is :\n",m);
    for(int i=1; i<=m; i++)
    printf("%d  ",i);
}
