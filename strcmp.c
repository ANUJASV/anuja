#include <stdio.h>
#include <string.h>
char a[50],b[50],c,d;
void main()
{
    scanf("%s\n%s",&a,&b);
	c=strlen(a);
	d=strlen(b);
	if(c>d)
	{
		printf("%s",a);
	}
	else if(c==d)
	{
		printf("%s",a);
	}
	else
	{
		printf("%s",b);
	}
}
