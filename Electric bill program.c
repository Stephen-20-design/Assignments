#include <stdio.h>

int main() {
    int customerID, unitsConsumed;
    char customerName[50];
    float chargesPerUnit, totalBill;

    // Input
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    printf("Enter Units Consumed: ");
    scanf("%d", &unitsConsumed);

    // Calculate charges per unit
    if (unitsConsumed <= 199)
        chargesPerUnit = 1.20;
    else if (unitsConsumed < 400)
        chargesPerUnit = 1.50;
    else if (unitsConsumed < 600)
        chargesPerUnit = 1.80;
    else
        chargesPerUnit = 2.00;

    // Calculate total bill
    totalBill = unitsConsumed * chargesPerUnit;
    if (totalBill > 400)
        totalBill += totalBill * 0.15;
    if (totalBill < 100)
        totalBill = 100;

    // Output
    printf("\nCustomer ID: %d\nCustomer Name: %s\nUnits Consumed: %d\nCharges per Unit: Ksh. %.2f\nTotal Amount: Ksh. %.2f\n",
           customerID, customerName, unitsConsumed, chargesPerUnit, totalBill);

    return 0;
}
