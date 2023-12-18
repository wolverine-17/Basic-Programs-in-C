#include <stdio.h>

#define PI 3.14159

int main()
{
    // Declare variables
    float radius, area, circumference;

    // Get input from the user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Display the results
    printf("Area of the circle: %.2f square units\n", area);
    printf("Circumference of the circle: %.2f units\n", circumference);

    return 0;
}
