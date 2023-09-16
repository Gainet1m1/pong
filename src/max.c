
#include <stdio.h>
#include <math.h>

int main() {
    double x; // Declare the variable for x
    double y; // Declare the variable for y

    // Input the value of x
    printf("Enter the value of x: ");
    scanf("%lf", &x);

    // Calculate the value of y using the provided expression
    y = 7e-3 * pow(x, 4) + ((22.8 * cbrt(x) - 1e3) * x + 3) / (x * x / 2) - x * pow(10 + x, 2.0 / x) - 1.01;

    // Print the result
    printf("The value of y for x = %.2lf is: %.4lf\n", x, y);

    return 0;
}

