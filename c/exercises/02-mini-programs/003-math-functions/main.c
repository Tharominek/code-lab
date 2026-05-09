#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265358979323846

void show_root_and_power(double number)
{
    printf("\n --- ROOT AND POWER --- \n\n");

    printf("Original number: %.2f\n", number);
    printf("sqrt(%.2f) = %.2f\n", number, sqrt(number));
    printf("pow(%.2f, 4) = %.2f\n", number, pow(number, 4));
}

void show_rounding(double decimal)
{
    printf("\n --- ROUNDING FUNCTIONS ---\n\n");

    printf("Original decimal: %.2f\n", decimal);
    printf("round(%.2f) = %.2f\n", decimal, round(decimal));
    printf("ceil(%.2f) = %.2f\n", decimal, ceil(decimal));
    printf("floor(%.2f) = %.2f\n", decimal, floor(decimal));
}

void show_absolute_values(int integer_number, double decimal_number)
{
    printf("\n --- ABSOLUTE VALUES --- \n\n");

    printf("Original integer: %d\n", integer_number);
    printf("abs(%d) = %d\n", integer_number, abs(integer_number));

    printf("\nOriginal decimal: %.2f\n", decimal_number);
    printf("fabs(%.2f) = %.2f\n", decimal_number, fabs(decimal_number));
}

void show_logarithm(double number)
{
    printf("\n --- LOGARITHM --- \n\n");

    printf("Original number: %.2f\n", number);
    printf("log(%.2f) = %.4f\n", number, log(number));
}

void show_trigonometry(double degrees)
{
    double radians = degrees * PI / 180.0;

    printf("\n --- TRIGONOMETRY --- \n\n");

    printf("Degrees: %.2f\n", degrees);
    printf("Radians: %.4f\n", radians);

    printf("sin(%.2f degrees) = %.4f\n", degrees, sin(radians));
    printf("cos(%.2f degrees) = %.4f\n", degrees, cos(radians));
    printf("tan(%.2f degrees) = %.4f\n", degrees, tan(radians));
}

int main(void)
{
    double number = 9.0;
    double decimal = 3.14;
    int negative_integer = -10;
    double negative_decimal = -10.75;
    double angle = 45.0;

    printf("=== MATH FUNCTIONS ===\n");

    show_root_and_power(number);
    show_rounding(decimal);
    show_absolute_values(negative_integer, negative_decimal);
    show_logarithm(number);
    show_trigonometry(angle);

    return 0;
}