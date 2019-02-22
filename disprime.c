#include <stdio.h>
int n,i,k,flag;
void main()
{
	scanf("%d%d",&n,&k);
	while(n<k)
	{
    flag=0;
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=1;
		}
	}
	if(flag==0 && n!=1)
	    printf("%d\t",n);
	n++;
	}
