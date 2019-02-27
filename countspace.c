#include <stdio.h>
#include <string.h>
main()
{
    char a[100];
    int i=0, space=0, ch=0;
    gets(a);
    while (a[i] != '\0')
    {
        if (a[i] == ' ')
        {
            space++;
            ch++;
        }
        else
            ch++;
        i++;
    }
    printf("%d",space);
}
