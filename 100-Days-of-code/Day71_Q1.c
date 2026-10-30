
#include <stdio.h>

int main()
{
    FILE *fp;
    char name[100];
    int age;

    scanf("%99s", name);
    scanf("%d", &age);

    fp = fopen("info.txt", "w");

    if(fp == NULL)
    {
        printf("Error creating file");
        return 1;
    }

    fprintf(fp, "Name: %s Age: %d", name, age);

    if(fclose(fp) != 0)
    {
        printf("Error saving file");
        return 1;
    }

    printf("File created successfully! Data written to info.txt");

    return 0;
}
