#include<stdio.h>
int s,v,a;
void main()
{
	scanf("%d%d%d",&s,&v,&a);
	if(s>v && s>a)
	{
		printf("%d",s);
	}
	else if(v>a)
	{
		printf("%d",v);
	}
	else
	{
		printf("%d",a);
	}
	return 0;
}
