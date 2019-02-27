#include <stdio.h>
int main()
{
    char str[100];
    int countDigits=0,countAlphabet=0,countSpecialChar=0,countSpaces=0;
    int counter;
    gets(str);
    for(counter=0;str[counter]!='\0';counter++)
    {
        if(str[counter]>='0' && str[counter]<='9')
            countDigits++;
        else if((str[counter]>='A' && str[counter]<='Z')||(str[counter]>='a' && str[counter]<='z'))
            countAlphabet++;
        else if(str[counter]==' ')
            countSpaces++;
        else
            countSpecialChar++;
    }
 
    printf("%d",countSpecialChar);
 
    return 0;
}
