
#include <stdio.h>

int main()
{
    FILE *fp;
    char str[200];

    fp = fopen("data.txt", "a");

    if(fp == NULL)
    {
        printf("Error opening file");
        return 1;
    }

    fgets(str, sizeof(str), stdin);

    fprintf(fp, "\n%s", str);

    if(fclose(fp) != 0)
    {
        printf("Error saving file");
        return 1;
    }

    printf("File updated successfully with appended text.");

    return 0;
}
