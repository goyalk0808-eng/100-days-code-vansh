/*Q33. Armstrong Number*/

#include <stdio.h>

int main()
{
    int n, original, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0)
    {
        digit = n % 10;

        sum = sum + digit * digit * digit;

        n = n / 10;
    }

    if (sum == original)
        printf("%d is an Armstrong number.", original);
    else
        printf("%d is not an Armstrong number.", original);

    return 0;
}

//Q34. Check Whether a Number is Prime

#include <stdio.h>

int main()
{
    int n, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        isPrime = 0;
    }
    else
    {
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 1)
        printf("%d is a prime number.", n);
    else
        printf("%d is not a prime number.", n);

    return 0;
}