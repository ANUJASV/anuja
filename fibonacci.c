#include <stdio.h>
int a,b=0,c=1,count=1,n;
void main()
{
	scanf("%d",&n);
	printf("%d\t",c);
	while(count<n)
	{
		a=b+c;
		count++;
		printf("%d\t",a);
		b=c;
		c=a;
	}
}
