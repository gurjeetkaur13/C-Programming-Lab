
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, last = 0, start = 1;
    int len;

    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    if(len > 0 && str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
        len--;
    }

    for(i = 0; i < len; i++)
    {
        if(str[i] == ' ' && str[i + 1] != ' '
           && str[i + 1] != '\0')
        {
            last = i + 1;
        }
    }

    for(i = 0; i < last; i++)
    {
        if(str[i] == ' ')
        {
            start = 1;
        }
        else if(start == 1)
        {
            printf("%c. ", str[i]);
            start = 0;
        }
    }

    printf("%s", str + last);

    return 0;
}
