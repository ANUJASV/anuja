#include<stdio.h>
int a,b,temp;
void main()
{
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("%d\t%d",a,b);
}
