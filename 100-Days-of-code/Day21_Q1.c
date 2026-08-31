#include <stdio.h>

int main()
{
    int n, first, last, digits = 0;
    int middle, power = 1, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    last = n % 10;

    while (temp >= 10)
    {
        temp /= 10;
        digits++;
        power *= 10;
    }

    first = temp;

    middle = (n % power) / 10;

    int result = last * power + middle * 10 + first;

    printf("%d\n", result);

    return 0;
}