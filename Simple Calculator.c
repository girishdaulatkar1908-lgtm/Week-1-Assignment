#include <stdio.h>

int main(void) {
    char op;
    double a, b, result;

    printf("Simple Calculator\n");
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter first number: ");
    scanf("%lf", &a);

    printf("Enter second number: ");
    scanf("%lf", &b);

    switch (op) {
        case '+':
            result = a + b;
            printf("%.2lf + %.2lf = %.2lf\n", a, b, result);
            break;
        case '-':
            result = a - b;
            printf("%.2lf - %.2lf = %.2lf\n", a, b, result);
            break;
        case '*':
            result = a * b;
            printf("%.2lf * %.2lf = %.2lf\n", a, b, result);
            break;
        case '/':
            if (b == 0) {
                printf("Error: division by zero is not allowed.\n");
            } else {
                result = a / b;
                printf("%.2lf / %.2lf = %.2lf\n", a, b, result);
            }
            break;
        default:
            printf("Error: unknown operator '%c'.\n", op);
            break;
    }

    return 0;
}
