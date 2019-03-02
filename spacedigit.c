#include <stdio.h>
int n;
int main()
{
	scanf("%d",&n);
	printrecursively(n);
	return 0;
}
void printrecursively(int num)
{
	if(num>10)
	{
		printrecursively(num /10);
		printf("");
	}
	printf("%d\t",num%10);
}
