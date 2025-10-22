#include <stdio.h>

int main() {
    int dayNumber;

    printf("Enter a number (1-7) to find the day of the week: ");
    scanf("%d", &dayNumber);
    printf("\n"); 

    switch (dayNumber) {
        case 1:
            printf("Day %d is: Monday\n", dayNumber);
            break; 

        case 2:
            printf("Day %d is: Tuesday\n", dayNumber);
            break;

        case 3:
            printf("Day %d is: Wednesday\n", dayNumber);
            break;

        case 4:
            printf("Day %d is: Thursday\n", dayNumber);
            break;

        case 5:
            printf("Day %d is: Friday\n", dayNumber);
            break;

        case 6:
            printf("Day %d is: Saturday\n", dayNumber);
            break;

        case 7:
            printf("Day %d is: Sunday\n", dayNumber);
            break;

        default:
            printf("Error: Invalid input. Please enter a number between 1 and 7.\n");
            break; 
    }
    return 0; 
}
