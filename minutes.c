#include <stdio.h>
int n,hours,min;
void main()
{
	scanf("%d",&n);
	hours=n/60;
	min=n%60;
	printf("%d.%d",hours,min);
}
