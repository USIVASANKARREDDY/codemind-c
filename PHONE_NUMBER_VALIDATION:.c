#include<stdio.h>
#include<string.h>
int main()
{
	char a[30];
	int b;
	scanf("%s",a);
	b=strlen(a);
	if(b==10 && a[0]!='0')
	{
		
		printf("Valid");
	}
	else
	{
		printf("Invalid");
	}
	
}