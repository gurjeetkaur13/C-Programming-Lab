
#include <stdio.h>

int main()
{
    int a[100], n, k;
    int i, j, max;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &k);

    if(k < 1 || k > n)
        return 0;

    for(i = 0; i <= n - k; i++)
    {
        max = a[i];

        for(j = i; j < i + k; j++)
        {
            if(a[j] > max)
            {
                max = a[j];
            }
        }

        if(i > 0)
            printf(" ");

        printf("%d", max);
    }

    return 0;
}
