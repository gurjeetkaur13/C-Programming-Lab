
#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp1, *fp2;
    int ch;

    fp1 = fopen("input.txt", "r");

    if(fp1 == NULL)
    {
        printf("Input file not found");
        return 1;
    }

    fp2 = fopen("output.txt", "w");

    if(fp2 == NULL)
    {
        printf("Error creating output file");
        fclose(fp1);
        return 1;
    }

    while((ch = fgetc(fp1)) != EOF)
    {
        ch = toupper((unsigned char)ch);
        fputc(ch, fp2);
    }

    fclose(fp1);

    if(fclose(fp2) != 0)
    {
        printf("Error saving output file");
        return 1;
    }

    printf("File converted successfully!");

    return 0;
}
