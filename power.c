#include <stdio.h>

double power(double base, int exponent) {
    if (exponent == 0) {
        // Any number raised to the power of 0 is 1
        return 1;
    } else if (exponent > 0) {
        // Positive exponent: base * base^(exponent-1)
        return base * power(base, exponent - 1);
    } else {
        // Negative exponent: 1 / (base^(-exponent))
        return 1.0 / power(base, -exponent);
    }
}

int main() {
    double base;
    int exponent;

    printf("Enter the base number: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    double result = power(base, exponent);
    printf("Result: %.3lf\n", result);

    return 0;
}
