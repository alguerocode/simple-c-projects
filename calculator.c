#include <stdio.h>

int main()
{
    char operator;
    double num1;
    double num2;

    printf("write your math, pattern: first_number operator second_number\n");
    scanf("%lf %c %lf", &num1, &operator, & num2);

    switch (operator)
    {
    case '+':
        printf("result: %lf", num1 + num2);
        break;
    case '-':
        printf("result: %lf", num1 - num2);
        break;
    case '*':
        printf("result: %lf", num1 * num2);
        break;
    case '/':
        printf("result: %lf", num1 / num2);
        break;
    default:
        printf("wrong math question");

    }

    return 0;
}