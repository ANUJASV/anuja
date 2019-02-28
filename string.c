#include <stdio.h>
#include <string.h>
char str[100];
int n,i;
void main()
{
	scanf("%d",&n);
	scanf("%s",&str);
	for(i=0;i<n;i++)
	{
		printf("%s\n",str);
	}
}
