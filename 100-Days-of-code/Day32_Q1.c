#include <stdio.h>

int main()
{
    int n1, n2, i;
    int a[100], b[100];

    scanf("%d", &n1);

    for(i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &n2);

    for(i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }

    // Print first array
    for(i = 0; i < n1; i++)
    {
        printf("%d ", a[i]);
    }

    // Print second array
    for(i = 0; i < n2; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}