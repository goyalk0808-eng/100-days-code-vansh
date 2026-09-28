/*Q27. Sum of First n Odd Numbers*/

#include <stdio.h>

int main()
{
    int n, i, odd, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        odd = 2 * i - 1;
        sum = sum + odd;
    }

    printf("Sum of first %d odd numbers = %d", n, sum);

    return 0;
}

//Q28. Product of Even Numbers from 1 to n

#include <stdio.h>

int main()
{
    int n, i;
    long long product = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2)
    {
        product = product * i;
    }

    printf("Product of even numbers = %lld", product);

    return 0;
}