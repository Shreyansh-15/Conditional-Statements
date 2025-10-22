#include <stdio.h>

int main() {
    int daysLate;
    int totalFine = 0;

    printf("Enter the number of days late: ");
    scanf("%d", &daysLate);

    if (daysLate > 30) {
        printf("\nMembership Cancelled.\n");
    } 
    else if (daysLate > 10) {
        totalFine += 5 * 2;
        totalFine += 5 * 4; 
        totalFine += (daysLate - 10) * 6;
        
        printf("\nTotal Fine: Rs. %d\n", totalFine);
    } 
    else if (daysLate > 5) {
        totalFine += 5 * 2; 
        totalFine += (daysLate - 5) * 4;
        
        printf("\nTotal Fine: Rs. %d\n", totalFine);
    } 
    else if (daysLate > 0) {
        totalFine = daysLate * 2;
        printf("\nTotal Fine: Rs. %d\n", totalFine);
    } 
    else {
        printf("\nNo fine. Thank you for returning on time.\n");
    }

    return 0; 
}
