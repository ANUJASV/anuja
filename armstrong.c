#include <stdio.h>
int n,a,res,sum=0;
void main()
{
	scanf("%d",&n);
	res=n;
	while(n!=0)
	{
		a=n%10;
		n=n/10;
		sum=sum+(a*a*a);
	}
	if(sum==res)
	printf("yes");
	else
	printf("no");
}
