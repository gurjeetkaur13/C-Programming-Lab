#include <stdio.h>

int main()
{
    long long binary, digit, complement = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary != 0)
    {
        digit = binary % 10;

        if (digit == 0)
            complement += 1 * place;
        else
            complement += 0 * place;

        place *= 10;
        binary /= 10;
    }

    printf("%lld\n", complement);

    return 0;
}