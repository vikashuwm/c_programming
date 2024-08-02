/* This program covers the basics of Control Structures: If-else statements, Switch-case statements, Loops (for, while, do-while), Break and continue statements */

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter a and b separated by space\n");
    scanf("%d %d", &a, &b); // Note the use of & to pass the address of variables

    // If-else statements
    if(a == 0) {
        printf("The value of a is 0\n"); // Corrected print to printf
    } else if(a > 0) {
        printf("a is positive!\n");
    } else {
        printf("a is negative!\n");
    }

    // Switch-case statements
    switch(a) {
        case 0:
            printf("a is zero\n");
            break;
        case 1:
            printf("a is one\n");
            break;
        case 2:
            printf("a is two\n");
            break;
        default:
            printf("a is not 0, 1, or 2\n");
    }

    // For loop
    printf("For loop: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // While loop
    printf("While loop: ");
    int count = 0;
    while(count < 5) {
        printf("%d ", count);
        count++;
    }
    printf("\n");

    // Do-while loop
    printf("Do-while loop: ");
    count = 0; // Reset count
    do {
        printf("%d ", count);
        count++;
    } while(count < 5);
    printf("\n");

    // Break and continue statements
    printf("Using break and continue:\n");
    for(int i = 0; i < 10; i++) {
        if(i == 5) {
            continue; // Skip the rest of the loop when i is 5
        }
        if(i == 8) {
            break; // Exit the loop when i is 8
        }
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
