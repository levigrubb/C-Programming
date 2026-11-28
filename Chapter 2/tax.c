/*
Write a program that asks the user to enter a dollars-and-cents amount, then displays that amoutn with 5% tax added.
Example:
    input: 100.00
    output: $105.00
*/

#include <stdio.h>

int main(void) {
    float input;
    float tax = 0.05f;
    printf("Input price: ");
    scanf("%f", &input);
    float total = input * 1 + (tax * input);
    printf("Total: %.2f\n", total);


    return 0;
}