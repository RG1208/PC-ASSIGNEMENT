#include <stdio.h>

int main()
{
    int num1, num2, num3, largest;

    // Input three numbers from user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Using conditional operator to find the largest number
    largest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    // Printing the result
    printf("The largest number among %d, %d, and %d is: %d\n", num1, num2, num3, largest);

    return 0;
}
