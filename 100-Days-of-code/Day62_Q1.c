
#include <stdio.h>

int main()
{
    int a[100], n, i;
    int sum, maxSum;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    sum = a[0];
    maxSum = a[0];

    for(i = 1; i < n; i++)
    {
        if(sum + a[i] > a[i])
        {
            sum = sum + a[i];
        }
        else
        {
            sum = a[i];
        }

        if(sum > maxSum)
        {
            maxSum = sum;
        }
    }

    printf("%d", maxSum);

    return 0;
}
