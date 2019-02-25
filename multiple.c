#include <stdio.h>
int n,i,b;
void main()
{
	scanf("%d",&n);
	b=n;
	for(i=0;i<5;i++)
	{
		printf("%d\t",n);
		n=n+b;
	}
}
