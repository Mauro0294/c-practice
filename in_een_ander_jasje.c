#include <stdio.h>

int main()
{
    int number, divisor;
    float result;
    result = (float) number / divisor;
    printf("Please enter an number:\n");
    scanf("%i", &number);
    printf("Please enter an divisor:\n");
    scanf("%i", &divisor);
    printf("%i / %i = %f:\n", number, divisor, result);
}