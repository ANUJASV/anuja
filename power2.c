#include <stdio.h>
int n,a;
ispoweroftwo(int a)
{
	return(ceil(log2(a))==floor(log2(a)));
}
int main()
{
	scanf("%d",&n);
	ispoweroftwo(n)?printf("yes\n"):printf("no\n");
}
