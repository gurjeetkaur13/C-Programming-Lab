
#include <stdio.h>

int main()
{
    int a[100], ans[100];
    int n, i, j;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        ans[i] = 1;

        for(j = 0; j < n; j++)
        {
            if(i != j)
            {
                ans[i] *= a[j];
            }
        }
    }

    printf("[");
    for(i = 0; i < n; i++)
    {
        if(i > 0)
            printf(",");

        printf("%d", ans[i]);
    }
    printf("]");

    return 0;
}
