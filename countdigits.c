#include <stdio.h>
int main()
{
    char str[100];
    int countDigits=0;
    int counter;
    gets(str);
    for(counter=0;str[counter]!='\0';counter++)
    {
        if(str[counter]>='0' && str[counter]<='9')
            countDigits++;
    }
 
    printf("%d",countDigits);
 
    return 0;
}
