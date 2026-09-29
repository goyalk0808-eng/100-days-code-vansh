/*Q37. LCM of Two Numbers*/

#include <stdio.h>

int main()
{
    int a, b, x, y, remainder, hcf, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

   
    while (y != 0)
    {
        remainder = x % y;
        x = y;
        y = remainder;
    }

    hcf = x;

    lcm = (a * b) / hcf;

    printf("LCM = %d", lcm);

    return 0;
}

//Q38. Sum of Digits

#include <stdio.h>

int main()
{
    int n, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    
        digit = n % 10;

        sum = sum + digit;

     
        n = n / 10;
    }

    {printf("Sum of digits = %d", sum); 

    return 0;
}
