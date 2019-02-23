#include <stdio.h>
int n,q,b,i,a,c,sum=0;
void main()
{
	scanf("%d%d",&n,&q);
	for(i=n+1;i<q;i++)
	{
		b=i;
		c=i;
		while(c!=0)
		{
		a=c%10;
		c=c/10;
		sum=sum+(a*a*a);
		}
	    if(b==sum)
		printf("%d\t",sum);
		sum=0;
	}
}
