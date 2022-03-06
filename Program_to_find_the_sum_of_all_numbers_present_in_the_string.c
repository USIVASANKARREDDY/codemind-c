#include<stdio.h>
int main()
{
    char str[1000];
    int sum,i,c=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        c++;
    }
    sum=0;
    for(i=0;i<c;i++)
    {
        if(str[i]>='0'&&str[i]<='9')
        {
            sum=sum+(str[i]-48);
        }
    }
    printf("%d",sum);
}