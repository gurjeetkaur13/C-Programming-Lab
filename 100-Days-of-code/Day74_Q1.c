
#include <stdio.h>
#include <string.h>

int main()
{
    FILE *source, *destination;
    char file1[100], file2[100];
    int ch;

    scanf("%99s", file1);
    scanf("%99s", file2);

    if(strcmp(file1, file2) == 0)
    {
        printf("Source and destination must be different");
        return 1;
    }

    source = fopen(file1, "r");

    if(source == NULL)
    {
        printf("Source file not found");
        return 1;
    }

    destination = fopen(file2, "w");

    if(destination == NULL)
    {
        printf("Cannot create destination file");
        fclose(source);
        return 1;
    }

    while((ch = fgetc(source)) != EOF)
    {
        if(fputc(ch, destination) == EOF)
        {
            printf("Error copying file");
            fclose(source);
            fclose(destination);
            return 1;
        }
    }

    fclose(source);

    if(fclose(destination) != 0)
    {
        printf("Error saving destination file");
        return 1;
    }

    printf("File copied successfully to %s", file2);

    return 0;
}
