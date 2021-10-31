//calculators

#include <stdio.h>
int main() {
    char operator;
    float first, second;
    printf("Please enter a Operator(+, -, *,): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%lf %lf", &first, &second);
    //switch cases
    switch (operator) {
    case '-':
        printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
        break;
    case '+':
        printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
        break;
        // operator doesn't match any case constant
    default:
        printf("Error! operator is not correct");
    }
//calculator 
    return 0;
}
