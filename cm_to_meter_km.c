#include <stdio.h>

int main() {
    float cm, meters, kilometers;

    // User input
    printf("Enter length in centimeters: ");
    scanf("%f", &cm);

    // Conversion
    meters = cm / 100;
    kilometers = cm / 100000;

    // Output
    printf("Length in meters: %.2f\n", meters);
    printf("Length in kilometers: %.5f\n", kilometers);

    return 0;
}