#include <stdio.h>

int main()
{
    int n, i, prime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        prime = 0;
    }
    else
    {
        for (i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                prime = 0;
                break;
            }
        }
    }

    if (prime)
        printf("Prime\n");
    else
        printf("Not prime\n");

    return 0;
}