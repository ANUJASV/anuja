#include <stdio.h>
int no,a,sum=0;
void main()
{
	scanf("%d",&no);
	while(no!=0)
	{
		a=no%10;
		no=no/10;
		sum=sum*10+a;
	}
	printf("%d",sum);
}
