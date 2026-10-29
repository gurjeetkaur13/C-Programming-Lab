
#include <stdio.h>

int main()
{
    char str[100];
    int i, start = 1;

    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            start = 1;
        }
        else if(str[i] == '\n')
        {
            break;
        }
        else if(start == 1)
        {
            printf("%c.", str[i]);
            start = 0;
        }
    }

    return 0;
}
