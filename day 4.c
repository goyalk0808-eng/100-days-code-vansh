/*Q7. Swap Without Third Variable*/

#include <stdio.h>

int main()
{
    int a, b;

    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

  
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

//Q8. Sum of First n Natural Numbers

#include <stdio.h>

int main()
{
    int n, sum;

    
    printf("Enter n: ");
    scanf("%d", &n);


    sum = n * (n + 1) / 2;

    printf("Sum of first %d natural numbers = %d", n, sum);

    return 0;
}
