/*
Write a program that asks the user to enter a U.S. dollar amount and then shows how
to pay that amount using the smallest number of $20, $10, $5, and $1 bills.
*/

#include <stdio.h>

int main(void) {
    printf("Please enter a dollar amount (e.g., 102.34)");
    float dollars;
    scanf("%f", &dollars);
    float total = dollars * 1.05;
    printf("Total: %.2f\n", total);
    return 0;
}