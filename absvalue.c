#include<stdio.h>
int hours,hr,hr1,minutes,min,min1;
void main()
{
	scanf("%d%d",&hr,&min);
	scanf("%d%d",&hr1,&min1);
	if(hr1>hr)
	{
		hours=hr1-hr;
	}
	else
	{
		hours=hr-hr1;
	}
	if(min1>min)
	{
		minutes=min1-min;
	}
	else
	{
		minutes=min-min1;
	}
	printf("%d.%d",hours,minutes);
}
