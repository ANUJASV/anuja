#include <stdio.h>
int j,no,f=1;
void main()
{
	scanf("%d",&no);
	for(j=1;j<=no;j++)
	{
		f=f*j;
	}
	printf("%d",f);
}
