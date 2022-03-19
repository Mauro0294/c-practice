// Get two shorts sides, calculate the long side.
// Get the long side and one short side, calculate the left over short side.

#include <stdio.h>
#include <math.h>

int main()
{
    int choice;
    float side_a, side_b, side_c;
    printf("Welcome to the pythagorean theorem calculator!\n");
    printf("Which one applies to you?\n");
    printf("\n1 - I have two short sides and I need to get the value of the long side\n");
    printf("2 - I have the long side, one short side and I need to get the value of the other short side\n\n");
    scanf("%i", &choice);
    if (choice == 1) {
        // Input
        printf("Value of short side A: ");
        scanf("%f", &side_a);
        printf("Value of short side B: ");
        scanf("%f", &side_b);

        // Calculation
        side_c = (side_a * side_a) + (side_b * side_b);

        // Output
        printf("Value of the long side: %.2f", sqrt(side_c));
    } else if (choice == 2) {
        // Input
        printf("Value of the short side: ");
        scanf("%f", &side_a);
        printf("Value of the long side: ");
        scanf("%f", &side_c);

        // Calculation
        side_b = (side_c * side_c) - (side_a * side_a);

        // Output
        printf("Value of the short side: %.2f", sqrt(side_b));
    } else {
        printf("'%i' is not a valid option", choice);
        return 0;
    }
}