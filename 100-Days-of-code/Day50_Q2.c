
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j, k, len;
    int first = 1;

    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    if(len > 0 && str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
        len--;
    }

    for(i = 0; i < len; i++)
    {
        for(j = i; j < len; j++)
        {
            if(first == 0)
                printf(",");

            for(k = i; k <= j; k++)
            {
                printf("%c", str[k]);
            }

            first = 0;
        }
    }

    return 0;
}
