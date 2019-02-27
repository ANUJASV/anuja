#include <stdio.h>
#include <string.h>
main()
{
    char str[50];
    int i=0, line=0, ch=0;
    gets(str);
    while (str[i] != '\0')
    {
        if (str[i] == '.')
        {
            line++;
            ch++;
        }
        else
            ch++;
        i++;
    }
    printf("%d", line+1);
}
