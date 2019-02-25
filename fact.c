#include <stdio.h>
int i,n,fact=1;
void main()
{
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("%d",fact);
}
