#include <stdio.h>
int num,temp,sum=0;
void main()
{
	scanf("%d",&num);
	while(num!=0)
	{
		temp=num%10;
		num=num/10;
		sum=sum+temp;
	}
	printf("%d",sum);
}
