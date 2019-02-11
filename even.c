#include<stdio.h>
int n;
void main()
{
	scanf("%d",&n);
	if(n<0)
	{
		printf("invalid");
	}
	else if(n%2==0)
	{
		printf("Even");
	}
	else
	{
		printf("Odd");
	}
	return 0;
}
