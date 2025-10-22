#include <stdio.h>

int main() {
    int monthNumber;
    int year; 

    printf("Enter a month number (1-12): ");
    if (scanf("%d", &monthNumber) != 1) {
        printf("Error: Invalid input. Please enter a valid integer.\n");
        return 1; 
    }
    if (monthNumber == 2) {
        printf("Enter year: ");
        if (scanf("%d", &year) != 1) {
            printf("Error: Invalid input. Please enter a valid year.\n");
            return 1; 
        }
    }

    printf("\n"); 

    switch (monthNumber) {
        // Months with 31 days
        case 1:
            printf("Month: January\n");
            printf("Days: 31\n");
            break;
        case 3:
            printf("Month: March\n");
            printf("Days: 31\n");
            break;
        case 5:
            printf("Month: May\n");
            printf("Days: 31\n");
            break;
        case 7:
            printf("Month: July\n");
            printf("Days: 31\n");
            break;
        case 8:
            printf("Month: August\n");
            printf("Days: 31\n");
            break;
        case 10:
            printf("Month: October\n");
            printf("Days: 31\n");
            break;
        case 12:
            printf("Month: December\n");
            printf("Days: 31\n");
            break;

        // Months with 30 days
        case 4:
            printf("Month: April\n");
            printf("Days: 30\n");
            break;
        case 6:
            printf("Month: June\n");
            printf("Days: 30\n");
            break;
        case 9:
            printf("Month: September\n");
            printf("Days: 30\n");
            break;
        case 11:
            printf("Month: November\n");
            printf("Days: 30\n");
            break;

        // Case for February (handles leap year)
        case 2:
            printf("Month: February\n");
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                printf("Days: 29 (Leap Year)\n");
            } else {
                printf("Days: 28\n");
            }
            break;

        default:
            printf("Error: Invalid input. Please enter a number between 1 and 12.\n");
            break;
    }

    return 0; 
}
