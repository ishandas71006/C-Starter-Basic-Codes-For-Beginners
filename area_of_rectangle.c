#include <stdio.h>

int main() {
    float length, width, area;

    // Input the length and width of the rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Calculate the area
    area = length * width;

    // Output the area
    printf("The area of the rectangle is: %f\n", area);

    return 0;
}