#include <stdio.h>

int main() {

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the annual interest rate (in percentage): ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);
    interest = calculate_simple_interest(principal, rate, time);

    printf("The simple interest is: %f\n", interest);

    return 0;
}