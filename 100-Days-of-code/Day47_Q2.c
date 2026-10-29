
#include <stdio.h>

int main()
{
    char str[200], word[200];
    int i, start = 0, len = 0;
    int max = 0, pos = 0;

    fgets(str, sizeof(str), stdin);

    for(i = 0; ; i++)
    {
        if(str[i] == ' ' || str[i] == '\n'
           || str[i] == '\0')
        {
            if(len > max)
            {
                max = len;
                pos = start;
            }

            len = 0;
            start = i + 1;
        }
        else
        {
            len++;
        }

        if(str[i] == '\0')
            break;
    }

    for(i = 0; i < max; i++)
    {
        word[i] = str[pos + i];
    }

    word[max] = '\0';

    printf("%s", word);

    return 0;
}
