/*Q25. Basic Calculator Using Switch-Case*/

#include <stdio.h>

int main()
{
    float a, b;
    char operator;

    printf("Enter expression (example: 10 + 5): ");
    scanf("%f %c %f", &a, &operator, &b);

    switch (operator)
    {
        case '+':
            printf("Result = %.2f", a + b);
            break;

        case '-':
            printf("Result = %.2f", a - b);
            break;

        case '*':
            printf("Result = %.2f", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Result = %.2f", a / b);
            else
                printf("Division by zero is not allowed.");
            break;

        case '%':
            printf("Modulo operator is only applicable to integers.");
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}

//Q26. Print Numbers from 1 to n

#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter n: ");
    scanf("%d", &n);

    // Loop from 1 to n
    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }

    return 0;
}