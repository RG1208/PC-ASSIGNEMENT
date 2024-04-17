#include <stdio.h>

int main()
{
    int choice;
    float length, width, base, height, radius, SlantHeight, area;

    printf("Enter the shape to calculate area:\n");
    printf("1. Square\n");
    printf("2. Circle\n");
    printf("3. Rectangle\n");
    printf("4. Cone\n");
    printf("5. Cyclinder\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter the length of square:");
        scanf("%f", &length);
        area = length * length;
        printf("Area of  Square: %f", area);
        break;

    case 2:
        printf("Enter radius of circle: ");
        scanf("%f", &radius);
        area = 3.14 * radius * radius;
        printf("Area of circle = %f\n", area);
        break;

    case 3:
        printf("Enter length and width of Rectangle: ");
        scanf("%f %f", &length, &width);
        area = length * width;
        printf("Area of  Square: %f", area);
        break;

    case 4:
        printf("Enter radius and Slant Height of cone: ");
        scanf("%f %f", &radius, &SlantHeight);
        area = 3.14 * radius * (radius + SlantHeight);
        printf("Area of Cone: %f", area);
        break;

    case 5:
        printf("Enter radius and height of cyclinder: ");
        scanf("%f %f", &radius, &height);
        area = 2 * 3.14 * radius * (radius + height);
        printf("Area of Cone: %f", area);
        break;

    default:
        printf("Invalid Choice\n");
    }

    return 0;
}