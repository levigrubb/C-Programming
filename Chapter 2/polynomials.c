/*
Task 1:
    Write a program that asks the user to enter a value for x and then displays the value of the following polynomial:
    3x⁵ + 2x⁴ - 5x³ -x² + 7x - 6

Task 2:
    Modify the program so that the polynomial is evaluated using the following formula (look in the book after Task 1 is complete)
*/

#include <stdio.h>

int main(void) {
    printf("We are going to calculate the following polynomial:\n");
    printf("3x⁵ + 2x⁴ - 5x³ -x² + 7x - 6");
    printf("Enter a value in for X: ");
    float x;
    scanf("%f", &x);
    float result = (3 * (x * x * x * x * x) + 2 * (x * x * x * x) - (5 * (x * x * x)) - (x * x) + (7 * x) - 6);
    printf("Result: %f\n", result);

    return 0;
}