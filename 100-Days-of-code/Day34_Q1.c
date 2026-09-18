#include <stdio.h>

int main()
{
    int n, arr[100];
    int pos, value;
    int i;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &pos, &value);

    // Shift elements to the right
    for(i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Insert the value
    arr[pos] = value;
    n++;

    // Print the updated array
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}