#include <stdio.h>
// youtube explanation: https://youtu.be/YYTsM501KdE
float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    float temperature;
    int choice;
    char repeat;

    do {
        printf("Temperature Converter\n\n");
        printf("1. Celsius to Fahrenheit\n");
        printf("2. Fahrenheit to Celsius\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("\nEnter temperature in Celsius: ");
                scanf("%f", &temperature);
                printf("%.2f Celsius is equal to %.2f Fahrenheit\n", temperature, celsiusToFahrenheit(temperature));
                break;
            case 2:
                printf("\nEnter temperature in Fahrenheit: ");
                scanf("%f", &temperature);
                printf("%.2f Fahrenheit is equal to %.2f Celsius\n", temperature, fahrenheitToCelsius(temperature));
                break;
            default:
                printf("Invalid choice!\n");
        }

        printf("Do you want to do another conversion? (y/n): ");
        scanf(" %c", &repeat);
    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}
