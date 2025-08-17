#include <stdio.h>

int main() {
    float radius, diameter, circumference, area;
    const float PI = 3.14159;

    // User input
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    // Calculations
    diameter = 2 * radius;
    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    // Output
    printf("Diameter: %.2f\n", diameter);
    printf("Circumference: %.2f\n", circumference);
    printf("Area: %.2f\n", area);

    return 0
}