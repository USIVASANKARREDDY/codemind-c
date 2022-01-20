#include<stdio.h>
#include<math.h>
int main()
{
    int n,iVar;
    float fVar;
    scanf("%d", &n);
    fVar=sqrt((double)n);
    iVar=fVar;
    if(iVar==fVar)
    printf("True");
    else
    printf("False");
    return 0;
}