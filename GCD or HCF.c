#include<stdio.h>
int main()
{
int num1,num2,temp1,temp2,gcd,lcm,x;
scanf("%d",&num1);
scanf("%d",&num2);

temp1=num1;
temp2=num2;

while(temp2!=0)
{
x=temp2;
temp2=temp1%temp2;
temp1=x;
}

gcd=temp1;
printf("%d
",gcd);
}
