/*Q29. Factorial of a Number*/

#include <stdio.h>

int main()
{
    int n, i;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers.");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            factorial = factorial * i;
        }

        printf("Factorial = %lld", factorial);
    }

    return 0;
}

//Q30. Reverse a Number

#include <stdio.h>

int main()
{
    int n, digit, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        // Extract last digit
        digit = n % 10;

        // Add digit to reversed number
        reverse = reverse * 10 + digit;

        // Remove last digit
        n = n / 10;
    }

    printf("Reversed number = %d", reverse);

    return 0;
}