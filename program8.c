/*8. Write a function to calculate the number of arrangements one can make from n items
and r selected at a time.(TSRS)*/
#include<stdio.h>
int fact(int);
int arrange(int, int);
void main()
{
    int x,y,  permute;
    printf("Enter value of x and y :\n");
    scanf("%d%d",&x,&y);
    printf("Arrangement is %d",arrange(x,y));

}
int fact(int n)
{
    int fact = 1;
    while(n!=0)
    {
        fact = fact*n;
        n--;
    }
    return fact;
}
int arrange(int n ,int r)
{
    return fact(n)/fact(r);
}
