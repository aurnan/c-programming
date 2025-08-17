#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // User input
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Conversion
    fahrenheit = (celsius * 9 / 5) + 32;

    // Output
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}
