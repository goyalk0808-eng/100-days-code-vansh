/*Q31. Decimal Number to Binary*/

#include <stdio.h>

int main()
{
    int n, remainder;
    long long binary = 0;
    long long place = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("Binary = 0");
    }
    else
    {
        while (n > 0)
        {
            
            remainder = n % 2;

        
            binary = binary + remainder * place;

            place = place * 10;

            n = n / 2;
        }

        printf("Binary = %lld", binary);
    }

    return 0;
}

//Q32. Check Whether a Number is Palindrome

#include <stdio.h>

int main()
{
    int n, original, digit, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if (original == reverse)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

    return 0;
}
