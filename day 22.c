/*Q43. Check Whether a Number is a Strong Number*/

#include <stdio.h>

int main()
{
    int n, original, digit;
    int factorial, i;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0)
    {
        digit = n % 10;

      
        factorial = 1;

        for (i = 1; i <= digit; i++)
        {
            factorial = factorial * i;
        }

       
        sum = sum + factorial;

        n = n / 10;
    } 

  
    if (sum == original)
        printf("Strong number");
    else
        printf("Not strong number");

    return 0;
}

//Q44. Sum of Series

#include <stdio.h>

int main()
{
    int n, i;
    float sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            sum = sum + 1;
        }
        else
        {
            sum = sum + (float)(2 * i - 1) / (2 * i);
        }
    }

    printf("Approximate sum: %.1f", sum);

    return 0;
}