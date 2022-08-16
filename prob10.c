#include <stdio.h>
int main()
{
    float c, f;
    printf("Enter temperature in celsius = ");
    scanf("%f", &c);
    f = (c * 1.8) + 32;
    printf("Temperature in Fahrenheit = %.1f\n", f);
}