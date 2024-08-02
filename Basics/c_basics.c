// This program covers the basics of C including introduction, syntax, data types, variables, constants, literals, and operators

#include <stdio.h>

int main() {
    // Introduction to C: Hello, World!
    printf("Hello, World!\n");

    // Comments
    // Single-line comment
    /* Multi-line
       comment */

    // Data Types and Variables
    int age = 25;
    char initial = 'V';
    float height = 5.9;
    double weight = 70.5;

    // Constants and Literals
    const int DAYS_IN_WEEK = 7;
    const float PI = 3.14159;

    // Output variable values
    printf("Age: %d\n", age);
    printf("Initial: %c\n", initial);
    printf("Height: %.1f\n", height);
    printf("Weight: %.2f\n", weight);

    // Output constants
    printf("Days in a week: %d\n", DAYS_IN_WEEK);
    printf("Value of PI: %.5f\n", PI);

    // Arithmetic Operators
    int a = 10, b = 5;
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);  // Modulus operator

    // Relational Operators
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);

    return 0;
}
