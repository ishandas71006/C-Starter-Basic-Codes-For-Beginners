#include <stdio.h>

int main() {
    float a, b;
    int x, y;

    // Input from user
    printf("Enter two numbers (a and b): ");
    scanf("%f %f", &a, &b);

    // Check for division by zero
    if (b == 0) {
        printf("Division by zero is not allowed.\n");
        return 0;
    }

    // Convert to integers before using %
    x = (int)a;
    y = (int)b;

    if (x % y == 0) {
        printf("%.2f is divisible by %.2f (after converting to integers)\n", a, b);
    } else {
        printf("%.2f is not divisible by %.2f (after converting to integers)\n", a, b);
    }

    return 0;
}
