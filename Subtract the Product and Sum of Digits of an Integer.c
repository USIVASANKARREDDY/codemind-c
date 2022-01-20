#include<stdio.h>
int main()
{
    int n,n1;
    int d,a,m,s;
    scanf("%d",&n);
    n1=n;
    a=0;
    m=1;
    while(n>0)
    {
        d=n%10;
        a=a+d;
        m=m*d;
        n=n/10;
    }
    s=m-a;
    printf("%d",s);
    return 0;
    
}