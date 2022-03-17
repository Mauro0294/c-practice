// Store numbers in an array and output them in array format

#include <stdio.h>

int main()
{
    int amount, x, waarde;
    printf("How much values do you want to store?\n");
    scanf("%i", &amount);
    int array[amount];
    amount = amount + 1;
    for (x = 1; x < amount; x++) {
        printf("Value %i: ", x);
        scanf("%i", &array[x]);
    }
    printf("Values in the array are:\n[");
    for (x = 1; x < amount; x++) {
        if (x < amount - 1) {
            printf("%i, ", array[x]);
        } else {
            printf("%i", array[x]);
        }
    }
    printf("]");
    return 0;
}