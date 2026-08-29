#include <stdio.h>

int main()
{
    int n, digit;
    int product = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;

        if (digit % 2 != 0)
        {
            product *= digit;
        }

        n /= 10;
    }

    printf("%d\n", product);

    return 0;
}