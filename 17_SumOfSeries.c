
#include <stdio.h>
#include <math.h>

int factorial(int n)
{
    int f = 1;

    for (int i = 2; i <= n; i++)
    {
        f *= i;
    }

    return f;
}

int main()
{
    int n;
    float x;
    float sum = 1.0L;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter x: ");
    scanf("%f", &x);

    for (int i = 2; i <= n; i++)
    {
        sum += (pow(x, i)) / (float)factorial(i);
    }

    printf("Sum: %f", sum);

    return 0;
}
