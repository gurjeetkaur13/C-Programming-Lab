
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j, k, len;
    int count, max = 0, repeat;

    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    if(len > 0 && str[len - 1] == '\n')
    {
        str[--len] = '\0';
    }

    for(i = 0; i < len; i++)
    {
        count = 0;

        for(j = i; j < len; j++)
        {
            repeat = 0;

            for(k = i; k < j; k++)
            {
                if(str[j] == str[k])
                {
                    repeat = 1;
                    break;
                }
            }

            if(repeat == 1)
                break;

            count++;

            if(count > max)
                max = count;
        }
    }

    printf("%d", max);

    return 0;
}
