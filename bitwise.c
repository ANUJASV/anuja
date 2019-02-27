#include <stdio.h>
int num1,num2;
void swap(int *,int *);
void main()
{
	scanf("%d%d",&num1,&num2);
	swap(&num1,&num2);
	printf("%d\t%d",num1,num2);
}
void swap(int *x,int *y)
{
	*x = *x ^ *y;
	*y = *x ^ *y;
	*x = *x ^ *y;
}
