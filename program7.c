/*7. Write a function to calculate the number of combinations one can make from n items
and r selected at a time. (TSRS)*/
#include<stdio.h>
int fact(int );
int comb(int ,int);
void  main()
{
    int x , r ,combination;
    printf("Enter value of x and r:\n");
    scanf("%d%d",&x,&r);
  combination = comb(x,r);
  printf("Combination from %d to %d is = %d",x,r,combination);
}
int fact(int n)
{
   int  fac = 1;
    while(n!=0)
    {
        fac = fac*n;
        n--;
    }
    return fac;
}
int comb(int n, int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}
