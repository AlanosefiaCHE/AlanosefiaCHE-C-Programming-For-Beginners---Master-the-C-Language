#include <stdio.h>

#define YEARS 5
#define MONTHS 12

int main() {
    // Hardcoded 2D-array met regenval in inches (voorbeelddata)
    float rainfall[YEARS][MONTHS] = {
        {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
        {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 2.4, 6.3},
        {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
        {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.1},
        {7.6, 5.6, 4.9, 2.6, 1.5, 0.9, 0.3, 0.2, 0.4, 2.5, 5.5, 7.2}
    };

    float yearlyTotal, grandTotal = 0.0;
    float monthlyAvg[MONTHS] = {0};
    int year, month;

    printf("YEAR\tTOTAL RAINFALL (inches)\n");

    // Bereken totaal per jaar en totaal over alle jaren
    for (year = 0; year < YEARS; year++) {
        yearlyTotal = 0.0;
        for (month = 0; month < MONTHS; month++) {
            yearlyTotal += rainfall[year][month];
        }
        printf("%d\t%.2f\n", 2010 + year, yearlyTotal);
        grandTotal += yearlyTotal;
    }

    // Gemiddelde regenval per jaar
    printf("\nThe yearly average rainfall is: %.2f inches\n", grandTotal / YEARS);

    // Gemiddelde regenval per maand over 5 jaar
    printf("\nMONTHLY AVERAGES:\n");
    printf("Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");

    for (month = 0; month < MONTHS; month++) {
        for (year = 0; year < YEARS; year++) {
            monthlyAvg[month] += rainfall[year][month];
        }
        monthlyAvg[month] /= YEARS;
        printf("%.1f  ", monthlyAvg[month]);
    }
    printf("\n");

    return 0;
}
