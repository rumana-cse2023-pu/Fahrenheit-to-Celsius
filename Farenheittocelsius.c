#include <stdio.h>

// Function to convert temperature from Fahrenheit to Celsius
float fahrenheit_to_celsius(float fahrenheit) {
    float celsius = (fahrenheit - 32) * 5 / 9;
    return celsius;
}

int main() {
    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = fahrenheit_to_celsius(fahrenheit);

    printf("Temperature in Celsius: %.2f\n", celsius);

    return 0;
}
