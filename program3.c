// Write function of even and odd , and if number is even return 1 and if number is odd print 0.
#include<stdio.h>
int Even_Odd(int );
int main()
{
    int s,x;
    printf("Enter a number :");
    scanf("%d",&x);
    s = Even_Odd(x);
    printf("%d",s);
    return 0;
}
int Even_Odd(int a)
{
    if(a%2==0)
        return 1;
    else
    return 0;
}
