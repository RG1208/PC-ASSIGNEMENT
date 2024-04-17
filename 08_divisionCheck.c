#include <stdio.h>

int main()
{
    float percentage;

    // Input percentage
    printf("Enter the percentage obtained by the student: ");
    scanf("%f", &percentage);

    // Checking division
    if (percentage >= 60)
    {
        printf("First Division\n");
    }
    else if (percentage >= 50 && percentage <= 59)
    {
        printf("Second Division\n");
    }
    else if (percentage >= 40 && percentage <= 49)
    {
        printf("Third Division\n");
    }
    else
    {
        printf("Fourth Division\n");
    }

    return 0;
}
