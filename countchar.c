#include <stdio.h>
#include <string.h>
main()
{
    char str[50];
    int i=0, word=0, chr=0;
    gets(str);
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            word++;
            chr++;
        }
        else
            chr++;
        i++;
    }
    if(word>=1)
    {
    chr=chr-word;
    }
    printf("%d", chr);
}
