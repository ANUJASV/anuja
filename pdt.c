#include <stdio.h>
int n,m,prod;
void main()
{
	scanf("%d%d",&n,&m);
	prod=n*m;
	if(prod%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
}
