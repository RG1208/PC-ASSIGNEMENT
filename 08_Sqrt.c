#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;

    printf("Enter a number: ");
    scanf("%f", &a);

    printf("Enter a number: ");
    scanf("%f", &b);

    printf("Enter a number: ");
    scanf("%f", &c);

    b = b * sqrt(4 * a * c);
    b = pow(a, 2) + b * c;

    printf("Output: %f", b);

    return 0;
}