#include <stdio.h>

void main()
{
    printf("Swap 2 numbers without using a temporary variable\n\n");

    int a, b;

    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("\n");

    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);

    // Swapping
    a = a + b;
    b = a - b;
    a = a - b;

    printf("\n");

    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
}