#include <stdio.h>
#include <math.h>

double calculate_compound_interest(
    double principal,
    double rate,
    int years,
    int times_compounded
)
{
    return principal * pow(1 + rate / times_compounded, times_compounded * years);
}

int main(void)
{

    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int times_compounded = 0;
    double total = 0.0;

    printf("=== Compound Interest Calculator ===\n\n");

    printf("Enter the principal amount: $");
    if (scanf("%lf", &principal) !=1)
    {
        printf("Invalid input. Please enter a valid number.\n");
        return 1;
    }

    if (principal < 0)
    {
        printf("Invalid principal. The principal cannot be negative.\n");
        return 1;
    }

    printf("Enter the annual interest rate %%: ");
    if (scanf("%lf", &rate) != 1)
    {
        printf("Invalid input. Please enter a valid interest rate.\n");
        return 1;
    }

    if (rate < 0)
    {
        printf("invalid rate. The interest rate cannot be negative in this exercise.\n");
        return 1;
    }

    rate = rate / 100.0;

    printf("Enter the number of years: ");
    if (scanf("%d", &years) != 1)
    {
        printf("Invalid input. Please enter a valid number of years.\n");
        return 1;
    }

    if (years < 0)
    {
        printf("Invalid years. The number of years cannot be negative.\n");
        return 1;
    }

    printf("Enter the number of times interest is compunded per years: ");
    if (scanf("%d", &times_compounded) != 1)
    {
        printf("Invalid input. Please enter a valid compounding frequency.\n");
        return 1;
    }

    if (times_compounded <= 0)
    {
        printf("Invalid compounding frequency. it must be greater than zero.\n");
        return 1;
    }

    total = calculate_compound_interest(
        principal,
        rate,
        years,
        times_compounded
    );
    
    printf("\n --- Result --- \n\n");
    printf("Pricipal: $%.2f\n", principal);
    printf("Annual interest rate: %.2f%%\n", rate * 100);
    printf("Years: %d\n", years);
    printf("Times compounded per year: %d\n", times_compounded);
    printf("Final amount: $%.2f\n", total);
    printf("interest earned: $%.2f\n", total - principal);
    
    return 0;
}