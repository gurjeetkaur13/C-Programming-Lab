
#include <stdio.h>

int main()
{
    int a[100], n, k;
    int i, j, sum, max;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &k);

    if(k < 1 || k > n)
    {
        printf("Invalid k");
        return 0;
    }

    max = 0;

    for(i = 0; i < k; i++)
    {
        max += a[i];
    }

    for(i = 1; i <= n - k; i++)
    {
        sum = 0;

        for(j = i; j < i + k; j++)
        {
            sum += a[j];
        }

        if(sum > max)
        {
            max = sum;
        }
    }

    printf("%d", max);

    return 0;
}
