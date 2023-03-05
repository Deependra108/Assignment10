//2. Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
float SI (int, int ,int);
void main()
{
  int p, r, t;
  float simple_interest;
  printf("Enter price , rate ,time :\n");
  scanf("%d",&p);
  scanf("%d",&r);
  scanf("%d",&t);
  simple_interest = SI(p,r,t);
  printf("Simple interest is %f",simple_interest);

}
float SI(int p, int r,int t)
{
    float si ;
    si = (p*r*t)/100.0;
    return si;
}
