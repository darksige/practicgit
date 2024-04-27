#include <stdio.h>
int main()
{
    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5/9;

    printf("Temperature in Celsius: %.2f\n", celsius);
    printf("By Chirag rai\n");
    printf("Sec L1");
    return 0;
}