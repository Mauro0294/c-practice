// Convert specified days into years, weeks and days.

// Year = 365 days
// Month = 31 days
// Day = 1 day

#include <stdio.h>

int main()
{
    int days, years, months, daysleft;
    printf("Convert days to years, month and days!\n");
    printf("How much days do you want to convert?\n");
    scanf("%i", &days);
    years = days / 365;
    daysleft = days - (years * 365);
    months = daysleft / 31;
    daysleft = daysleft - (months * 31);
    printf("Years: %i\n", years);
    printf("Months: %i\n", months);
    printf("Days: %i\n", daysleft);
    printf("\nThanks for using the tool! :)");
    return 0;
}