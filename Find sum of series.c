#include<stdio.h>

int main() 
{
	int n;
	float i, sum, t;
	scanf("%d",&n);
	sum=0;
	for (i=1;i<=n;i++) {
		t=1/i;
		sum=sum+t;
	}
	printf("%.2f",sum);
}