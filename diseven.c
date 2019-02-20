#include <stdio.h>
int N,Q,i;
void main()
{
	scanf("%d%d",&N,&Q);
	for(i=N;i<Q;i++)
	{
		if(i%2==0)
		{
		printf("%d\t",i);
		}
	}
}
