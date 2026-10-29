
#include <stdio.h>

int main()
{
    int a[100], n, x;
    int i, ans = -1;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &x);

    for(i = 0; i < n; i++)
    {
        if(a[i] >= x)
        {
            ans = i;
            break;
        }
    }

    printf("%d", ans);

    return 0;
}
