#include <stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int sum = 0;

    while (n != 0)
    {
        int digit = n % 10;
        sum += digit;
        n = n / 10;
    }

    printf("Sum: %d\n", sum);

    return 0;
}