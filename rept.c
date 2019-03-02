#include <stdio.h>
int n,k,i,count=0;
void main()
{
	scanf("%d%d",&n,&k);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		count++;
	}
	printf("%d",count);
}
