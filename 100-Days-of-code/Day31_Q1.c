#include <stdio.h>

int main()
{
    int n, arr[100], key;
    int i, found = -1;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            found = i;
            break;
        }
    }

    if(found != -1)
        printf("Found at index %d", found);
    else
        printf("-1");

    return 0;
}