#include <stdio.h>
#include <math.h>

    const double PI = 3.14159;


double calculate_circle_area(double radius)
{
    return PI * pow(radius, 2);
}

double calculate_sphere_surface_area(double radius)
{
    return 4 * PI * pow(radius, 2);
}

double calculate_sphere_volume(double radius)
{
    return (4.0 / 3.0) * PI * pow(radius, 3);
}

int main(void)
{
    double radius = 0.0;
    double circle_area = 0.0;
    double sphere_surface_area = 0.0;
    double sphere_volume = 0.0;

    printf(" --- CIRCLE AND SPHERE CALCULATOR --- \n\n");

    printf("Enter the radius: ");

    if (scanf("%lf", &radius) != 1)
    {       
    printf("Invalid input. Please enter a number.\n");
    return 1;
    }

    if (radius < 0)
    {
        printf("Invalid radius. Radius cannot be negative.\n");
        return 1;
    }

    circle_area = calculate_circle_area(radius);
    sphere_surface_area = calculate_sphere_surface_area(radius);
    sphere_volume = calculate_sphere_volume(radius);

    printf("\n--- Results ---\n\n");
    printf("Radius: %.2lf\n", radius);
    printf("Circle area: %.2lf\n", circle_area);
    printf("Sphere surface area: %.2lf\n", sphere_surface_area);
    printf("Sphere volume: %.2lf\n", sphere_volume);

    return 0;

}