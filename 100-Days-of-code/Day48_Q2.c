
#include <stdio.h>

int main()
{
    char str[200], temp;
    int i, j, start = 0;

    fgets(str, sizeof(str), stdin);

    for(i = 0; ; i++)
    {
        if(str[i] == ' ' || str[i] == '\n'
           || str[i] == '\0')
        {
            j = i - 1;

            while(start < j)
            {
                temp = str[start];
                str[start] = str[j];
                str[j] = temp;

                start++;
                j--;
            }

            start = i + 1;
        }

        if(str[i] == '\n' || str[i] == '\0')
        {
            str[i] = '\0';
            break;
        }
    }

    printf("%s", str);

    return 0;
}
