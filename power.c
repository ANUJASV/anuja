#include<stdio.h>
int N,k,i;
int a=1;
void main()
{
	scanf("%d%d",&N,&k);
	for(i=0;i<k;i++)
	{
		a=a*N;;
	}
	printf("%d",a);
}
