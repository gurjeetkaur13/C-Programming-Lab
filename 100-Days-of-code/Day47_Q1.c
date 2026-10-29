
#include <stdio.h>

int main()
{
    char a[100], b[100];
    int count[256] = {0};
    int i, flag = 1;

    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);

    for(i = 0; a[i] != '\0' && a[i] != '\n'; i++)
    {
        count[(unsigned char)a[i]]++;
    }

    for(i = 0; b[i] != '\0' && b[i] != '\n'; i++)
    {
        count[(unsigned char)b[i]]--;
    }

    for(i = 0; i < 256; i++)
    {
        if(count[i] != 0)
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("Anagrams");
    else
        printf("Not Anagrams");

    return 0;
}
