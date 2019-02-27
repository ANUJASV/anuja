#include <stdio.h>
#include <string.h>
main()
{
    char s[100];
    int i=0, w=0, ch=0;
    gets(s);
    while (s[i] != '\0')
    {
        if (s[i] == ' ')
        {
            w++;
            ch++;
        }
        else
            ch++;
        i++;
    }
    printf("%d",w+1);
}
