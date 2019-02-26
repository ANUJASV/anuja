#include <stdio.h>
char n;
void main()
{
	scanf("%s",&n);
	if(!isdigit(n))
	{
		printf("no");
	}
	else
	{
		printf("yes");
	}
}
