/*
TASK:
Condense this program by:
    1. replacing the assignments to height, length, and width with initializers, and;
    2. Removing the weight variable, instead calculating (volume + 165) / 166 within
    the last printf
*/

#include <stdio.h>

int main(void) {
    int height, length, width, volume, weight;

    printf("Enter height of box: ");
    scanf("%d", &height);
    printf("Enter length of box: ");
    scanf("%d", &length);
    printf("Enter width of box: ");
    scanf("%d", &width);
    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}