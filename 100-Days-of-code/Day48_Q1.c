
#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100], temp[200];
    int len1, len2;

    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);

    a[strcspn(a, "\n")] = '\0';
    b[strcspn(b, "\n")] = '\0';

    len1 = strlen(a);
    len2 = strlen(b);

    if(len1 != len2)
    {
        printf("Not rotation");
        return 0;
    }

    strcpy(temp, a);
    strcat(temp, a);

    if(strcmp(a, b) != 0 &&
       strstr(temp, b) != NULL)
    {
        printf("Rotation");
    }
    else
    {
        printf("Not rotation");
    }

    return 0;
}
