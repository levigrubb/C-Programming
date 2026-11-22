#include <stdio.h>

/*
Task 1:
    Write a program that computes the volume of a sphere with a 10-meter radius, using the
    formula `v = 4/3πr³`. Write the fraction 4/3 as `4.0f/3.0f`. (Try writing it as 4/3.
    What happens?) HINT: C doesn't have an exponentiation operator, so you'll need to multiply
    r by itself twice to compute r³

Task 2:
    Modify the program so that it prompts the user to enter the radius of the sphere
*/

int main(void) {
    int radius = 10;
    float pi = 3.14159;
    float volume = 4.0f / 3.0f * pi * (radius * radius * radius);
    printf("Volume:\t%f\n", volume);
    

    return 0;
}