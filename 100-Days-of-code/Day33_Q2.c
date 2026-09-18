#include <stdio.h>

int main()
{
    int n, arr[100], key;
    int i, pos;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    // Find the insertion position
    for(pos = 0; pos < n; pos++)
    {
        if(arr[pos] > key)
            break;
    }

    // Shift elements to the right
    for(i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[pos] = key;
    n++;

    // Print the updated array
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}