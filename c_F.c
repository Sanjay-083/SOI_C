//// converting Fahreit to celsius
#include <stdio.h>
void main()
{

    float fahrenheit, celsius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (5.0 / 9.0) * (fahrenheit - 32);
    printf("Temperature in Celsius: %.2f\n", celsius);
}
