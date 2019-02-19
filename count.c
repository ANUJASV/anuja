#include<stdio.h>
int n,a;
int count=0;
void main()
{
	scanf("%d",&n);
	while(n!=0)
	{
	a=n%10;
	n=n/10;
		++count;
	}
	printf("%d",count);
}
