#include <stdio.h>
int n,flag;
void main()
{
	scanf("%d",&n);
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=1;
		}
	}
	if(flag==0)
	printf("yes");
	else
	printf("no");
}
