#include <stdio.h>
int n,a,b,r=0;
void main()
{
	scanf("%d",&n);
	b=n;
	while(n!=0)
	{
	a=n%10;
	r=r*10+a;
	n=n/10;
	}
	if(b==r)
	printf("yes");
	else
	printf("no");
}
