#include <stdio.h>
#include <math.h> 

int main() {
    double a, b, c; 
    double discriminant, root1, root2, realPart, imaginaryPart;

    printf("Enter the coefficients (a, b, c) of the quadratic equation (ax^2 + bx + c = 0):\n");
    
    printf("Enter a: ");
    scanf("%lf", &a);
    
    printf("Enter b: ");
    scanf("%lf", &b);
    
    printf("Enter c: ");
    scanf("%lf", &c);

    if (a == 0) {
        printf("Error: 'a' cannot be zero. This is not a quadratic equation.\n");
        return 1; 
    }

    discriminant = (b * b) - (4 * a * c);
    printf("\n--- Results ---\n");

    if (discriminant > 0) {
        printf("Category: Roots are REAL and DISTINCT.\n");
        
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    }    
    else if (discriminant == 0) {
        printf("Category: Roots are REAL and EQUAL.\n");
                
        root1 = root2 = -b / (2 * a);
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    }    
    else {
        printf("Category: Roots are COMPLEX and IMAGINARY.\n");
        
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a); 
        printf("Root 1 = %.2lf + i(%.2lf)\n", realPart, imaginaryPart);
        printf("Root 2 = %.2lf - i(%.2lf)\n", realPart, imaginaryPart);
    }
    return 0;
}
