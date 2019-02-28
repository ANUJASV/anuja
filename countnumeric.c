#include <stdio.h>
int main()
{
    char s[100];
    int count=0;
    int counter;
    gets(s);
    for(counter=0;s[counter]!='\0';counter++)
    {
        if(s[counter]>='0' && s[counter]<='9')
            count++;
    }
 
    printf("%d",count);
 
    return 0;
}
