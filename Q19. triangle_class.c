#include <stdio.h>

int main() {
    double side1, side2, side3;

    printf("Enter the lengths of the three sides of the triangle:\n");
    
    printf("Enter Side 1: ");
    scanf("%lf", &side1);
    
    printf("Enter Side 2: ");
    scanf("%lf", &side2);

    printf("Enter Side 3: ");
    scanf("%lf", &side3);

    if (side1 <= 0 || side2 <= 0 || side3 <= 0 || (side1 + side2 <= side3) || (side1 + side3 <= side2) || (side2 + side3 <= side1)) {
        printf("\nInvalid Triangle: The sum of any two sides must be greater than the third side, and all sides must be positive.\n");
    }    
    else if (side1 == side2 && side2 == side3) {
        printf("\nThe triangle is: Equilateral\n");
    }
    else if (side1 == side2 || side1 == side3 || side2 == side3) {
        printf("\nThe triangle is: Isosceles\n");
    }
    else {
        printf("\nThe triangle is: Scalene\n");
    }

    return 0; 
}
