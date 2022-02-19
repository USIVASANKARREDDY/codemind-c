#include<stdio.h>
int main()
{
    int n,d,s=0,sq;
    scanf("%d",&n);
    sq=n*n;
    while(sq!=0)
    {
        d=sq%10;
        s=s+d;
        sq=sq/10;
    }
    if(n==s)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}