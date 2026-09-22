
/*Q11. Even or Odd*/

#include <stdio.h>

int main()
{
    int n;

  
    printf("Enter an integer: ");
    scanf("%d", &n);
\
    if (n % 2 == 0)
        printf("%d is even.", n);
    else
        printf("%d is odd.", n);

    return 0;
}

//Q12. Positive, Negative or Zero

#include <stdio.h>

int main()
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

  
    if (n >= 0)
    {
        if (n == 0)
            printf("The number is zero.");
        else
            printf("The number is positive.");
    }
    else
    {
        printf("The number is negative.");
    }

    return 0;
}