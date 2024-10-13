//C program to calculate the fine for overdue library books
//code by Steve 
//reg.CT/101/G/16033/22
//phone no. 0714272043

#include <stdio.h>

int main() {
    int bookID, dueDate, returnDate, daysOverdue, fineRate = 0, fineAmount = 0;

    // Input from the user
    printf("Enter Book ID: ");
    scanf("%d", &bookID);
    printf("Enter Due Date: ");
    scanf("%d", &dueDate);
    printf("Enter Return Date: ");
    scanf("%d", &returnDate);

    // Calculate days overdue
    daysOverdue = returnDate - dueDate;

    // Determine fine rate and amount
    if (daysOverdue > 0 && daysOverdue <= 7) fineRate = 20;
    else if (daysOverdue > 7 && daysOverdue <= 14) fineRate = 50;
    else if (daysOverdue > 14) fineRate = 100;
    
    fineAmount = fineRate * daysOverdue;

    // Display output
    printf("\nBook ID: %d\nDue Date: %d\nReturn Date: %d\n", bookID, dueDate, returnDate);
    printf("Days Overdue: %d\nFine Rate: Ksh %d\nTotal Fine: Ksh %d\n", daysOverdue > 0 ? daysOverdue : 0, fineRate, fineAmount);

    return 0;
}
