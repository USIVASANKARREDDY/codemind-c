#include<stdio.h>
int main()
{
    int l,m,n,i,k=0;
    scanf("%d%d%d",&l,&m,&n);
    for(i=l;i<=m;i++)
    {
        if(i%n==0)
        {
            k++;
        }
    }
    printf("%d",k);
    
}