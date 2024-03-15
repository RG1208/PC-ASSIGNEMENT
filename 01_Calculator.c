#include <stdio.h>

int main()
{
    printf("Calculator\n\n");

    float num1, num2;

    printf("Enter a number: ");
    scanf("%f", &num1);

    printf("Enter a number: ");
    scanf("%f", &num2);

    printf("\n");

    printf("The value of (a + b) is %f\n", num1 + num2);
    printf("The value of (a - b) is %f\n", num1 - num2);
    printf("The value of (a * b) is %f\n", num1 * num2);
    printf("The value of (a / b) is %f\n", num1 / num2);
    printf("The value of (a modulus b) is %d\n", (int)num1 % (int)num2);

    return 0;
}