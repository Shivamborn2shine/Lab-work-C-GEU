/*input 3 sides and then check wheather triangle is possible or not
 with sides if yes find area of triangle*/


#include <stdio.h>
#include <math.h>

// Function to check if the sides form a triangle
int isTriangle(float a, float b, float c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

// Function to calculate the area of the triangle using Heron's formula
float calculateArea(float a, float b, float c) {
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    float a, b, c;

    // Input sides of the triangle
    printf("Enter the length of side a: ");
    scanf("%f", &a);
    printf("Enter the length of side b: ");
    scanf("%f", &b);
    printf("Enter the length of side c: ");
    scanf("%f", &c);

    // Check if the sides can form a triangle
    if (isTriangle(a, b, c)) {
        // Calculate and print the area
        float area = calculateArea(a, b, c);
        printf("The triangle with sides %.2f, %.2f, and %.2f is possible.\n", a, b, c);
        printf("The area of the triangle is: %.2f\n", area);
    } else {
        // Print error message if the sides cannot form a triangle
        printf("The sides %.2f, %.2f, and %.2f cannot form a triangle.\n", a, b, c);
    }

    return 0;
}
