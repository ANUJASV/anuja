#include <stdio.h>
int i,max,a[10];
void main()
{
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=1;i<10;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	printf("%d",max);
}
