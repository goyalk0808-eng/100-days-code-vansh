/*Q41. Swap First and Last Digit of a Number*/

#include <stdio.h>

int main()
{
    int n, original, first, last;
    int digits = 1;
    int power = 1;
    int middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    last = n % 10;

    
    while (n >= 10)
    {
        n = n / 10;
        power = power * 10;
    }

    
    first = n;

    
    if (power == 1)
    {
        result = original;
    }
    else
    {
       
        middle = (original % power) / 10;

    
        result = last * power + middle * 10 + first;
    }

    printf("Number after swapping first and last digit = %d", result);

    return 0;
}

//Q42. Check Whether a Number is a Perfect Number

#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

  
    for (i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == n && n > 0)
        printf("Perfect number");
    else
        printf("Not perfect number");

    return 0;
}

