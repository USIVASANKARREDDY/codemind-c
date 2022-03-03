#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,p,ans;
    scanf("%d%d%d",&x,&y,&m);
    p=pow(x,y);
    ans=p%m;
    printf("%d",ans);
    
}