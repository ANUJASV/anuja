#include <stdio.h>
int n,a,d,sum,res;
void main()
{
	scanf("%d%d%d",&n,&a,&d);
	sum=(n*((2*a)+(n-1)*d))/2;
	printf("%d",sum);
}
