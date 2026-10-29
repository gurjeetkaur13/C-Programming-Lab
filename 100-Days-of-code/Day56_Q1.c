
#include <stdio.h>

int main()
{
    int a[100], n, i, j;
    int next;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        next = -1;

        for(j = i + 1; j < n; j++)
        {
            if(a[j] > a[i])
            {
                next = a[j];
                break;
            }
        }

        if(i > 0)
        {
            printf(", ");
        }

        printf("%d", next);
    }

    return 0;
}
