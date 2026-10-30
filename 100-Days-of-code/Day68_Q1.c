
#include <stdio.h>

int main()
{
    int a[100], n, i;
    int sum = 0, total, missing;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    total = n * (n + 1) / 2;

    missing = total - sum;

    printf("%d", missing);

    return 0;
}
