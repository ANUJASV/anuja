#include <stdio.h>
int n,i,sum=0,res;
void main()
{
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	res=sum/n;
	printf("%d",res);
}
