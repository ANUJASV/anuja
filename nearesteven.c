#include <stdio.h>
int n;
void main()
{
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("%d",n);
	}
	else
	{
		printf("%d",n-1);
	}
}
