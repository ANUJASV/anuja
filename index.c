#include<stdio.h>
int n,i;
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
	printf("%d\t%d\n",a[i],i);
	}
}
