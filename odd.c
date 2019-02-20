#include <stdio.h>
int N,Q,i;
void main()
{
	scanf("%d%d",&N,&Q);
	for(i=N;i<Q;i=i+2)
	{
		if(i!=N)
		printf("%d\t",i);
	}
}
