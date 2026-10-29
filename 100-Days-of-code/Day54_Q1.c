
#include <stdio.h>

int main()
{
    int n, x, i;
    int left, right, pivot = -1;

    scanf("%d", &n);

    for(x = 1; x <= n; x++)
    {
        left = 0;
        right = 0;

        for(i = 1; i <= x; i++)
        {
            left += i;
        }

        for(i = x; i <= n; i++)
        {
            right += i;
        }

        if(left == right)
        {
            pivot = x;
            break;
        }
    }

    printf("%d", pivot);

    return 0;
}
