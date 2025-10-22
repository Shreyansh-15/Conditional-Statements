#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;
    int errorFlag = 0; 

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
            
        case '-':
            result = num1 - num2;
            break;
            
        case '*':
            result = num1 * num2;
            break;
            
        case '/':
            if (num2 == 0) {
                printf("\nError: Division by zero is not allowed.\n");
                errorFlag = 1; 
            } else {
                result = num1 / num2;
            }
            break;
            
        case '%':
            if ((int)num2 == 0) {
                printf("\nError: Division by zero is not allowed for modulo.\n");
                errorFlag = 1; 
            } else {
                result = (int)num1 % (int)num2;
            }
            break;
            
        default:
            printf("\nError: Invalid operator. Please use +, -, *, /, or %%.\n");
            errorFlag = 1; 
            break;
    }
    if (errorFlag == 0) {
        if (operator == '%') {
             printf("\nResult: %.0f %c %.0f = %.0f\n", num1, operator, num2, result);
        } else {
             printf("\nResult: %.2f %c %.2f = %.2f\n", num1, operator, num2, result);
        }
    }

    return 0;
}
