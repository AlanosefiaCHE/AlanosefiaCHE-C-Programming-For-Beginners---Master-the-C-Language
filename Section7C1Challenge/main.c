#include <stdio.h>

int main() {
    const double BASIC_PAY = 12.0;
    const double OVERTIME_RATE = 1.5;
    const double TAX_RATE1 = 0.15;
    const double TAX_RATE2 = 0.20;
    const double TAX_RATE3 = 0.25;

    const double TAX_LIMIT1 = 300.0;
    const double TAX_LIMIT2 = 150.0;

    double hours, grossPay, taxes, netPay;

    // Vraag aantal gewerkte uren
    printf("Enter number of hours worked in a week: ");
    scanf("%lf", &hours);

    // Bereken brutoloon
    if (hours > 40) {
        grossPay = (40 * BASIC_PAY) + ((hours - 40) * BASIC_PAY * OVERTIME_RATE);
    } else {
        grossPay = hours * BASIC_PAY;
    }

    // Bereken belastingen
    if (grossPay <= TAX_LIMIT1) {
        taxes = grossPay * TAX_RATE1;
    } else if (grossPay <= (TAX_LIMIT1 + TAX_LIMIT2)) {
        taxes = (TAX_LIMIT1 * TAX_RATE1) +
                ((grossPay - TAX_LIMIT1) * TAX_RATE2);
    } else {
        taxes = (TAX_LIMIT1 * TAX_RATE1) +
                (TAX_LIMIT2 * TAX_RATE2) +
                ((grossPay - TAX_LIMIT1 - TAX_LIMIT2) * TAX_RATE3);
    }

    // Netto loon
    netPay = grossPay - taxes;

    // Output resultaten
    printf("Gross Pay: $%.2f\n", grossPay);
    printf("Taxes:     $%.2f\n", taxes);
    printf("Net Pay:   $%.2f\n", netPay);

    return 0;
}
