#include <stdio.h>
#include <math.h>

int main()
{
    int shape;
    float area;

    // square
    float square_side;

    // circle
    float circle_radius;

    // rectangle
    float rect_length, rect_width;

    // cone
    float cone_radius, cone_slant_height;

    // cylinder
    float cylinder_radius, cylinder_height;

    printf("\n");
    printf("1. Square\n");
    printf("2. Circle\n");
    printf("3. Rectangle\n");
    printf("4. Cone\n");
    printf("5. Cylinder\n");

    printf("Enter the value of n: ", shape);
    scanf("%d", &shape);

    switch (shape)
    {
    case 1:

        printf("Enter the side of the square: ");
        scanf("%f", &square_side);

        area = pow(square_side, 2);

        break;

    case 2:
        printf("Enter the radius of the circle: ");
        scanf("%f", &circle_radius);

        area = 3.14 * pow(circle_radius, 2);

        break;
    case 3:
        printf("Enter the length of the rectangle: ");
        scanf("%f", &rect_length);

        printf("Enter the width of the rectangle: ");
        scanf("%f", &rect_width);

        area = rect_length * rect_width;

        break;
    case 4:
        printf("Enter the radius of the cone: ");
        scanf("%f", &cone_radius);

        printf("Enter the slant height of the cone: ");
        scanf("%f", &cone_slant_height);

        area = 3.14 * cone_radius * cone_slant_height + 3.14 * pow(cone_radius, 2);

        break;
    case 5:
        printf("Enter the radius of the cylinder: ");
        scanf("%f", &cylinder_radius);

        printf("Enter the height of the cylinder: ");
        scanf("%f", &cylinder_height);

        area = 2 * (3.14 * pow(cylinder_radius, 2)) + 3.14 * cylinder_radius * cylinder_height;

        break;

    default:
        printf("Invalid Input\n");

        break;
    }

    printf("Area: %f\n", area);

    return 0;
}