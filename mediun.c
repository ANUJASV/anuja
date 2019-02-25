#include <stdio.h>
int n,i,j,min,b;
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
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				min=a[i];
				a[i]=a[j];
				a[j]=min;
			}
		}
	}
	i=n/2;
	printf("%d",a[i]);
}
