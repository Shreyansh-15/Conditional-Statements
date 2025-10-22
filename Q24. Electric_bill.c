#include <stdio.h>

int main() {
    int units;
    double totalBill = 0.0;

    printf("Enter total units consumed: ");
    scanf("%d", &units);

    if (units > 300) {
        totalBill += 100 * 5; 
        totalBill += 100 * 7; 
        totalBill += 100 * 10;
        totalBill += (units - 300) * 12;
    }
    else if (units > 200) {
        totalBill += 100 * 5; 
        totalBill += 100 * 7; 
        totalBill += (units - 200) * 10;
    }
    else if (units > 100) {
        totalBill += 100 * 5; 
        totalBill += (units - 100) * 7;
    }
    else if (units > 0) {
        totalBill = units * 5;
    }
    else {
        totalBill = 0.0;
    }

    printf("\nTotal Electricity Bill: Rs. %.2f\n", totalBill);

    return 0; 
}
