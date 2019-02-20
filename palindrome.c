#include <stdio.h>
int n,a;
void main()
{
	scanf("%d",&n);
	while(n!=0)
	{
	a=n%10;
	printf("%d",a);
	n=n/10;
	}
}
