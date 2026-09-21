/*Q1. Sum of Two Numbers*/
#include <stdio.h>

int main()
{
    int a, b, sum;

  
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
\
    sum = a + b;


    printf("Sum = %d", sum);

  
    return 0;
}



/* Q2. Sum, Difference, Product and Quotient*/

#include <stdio.h>

int main()
{
    float a, b;

  
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

 
    printf("Sum = %.2f\n", a + b);
    printf("Difference = %.2f\n", a - b);
    printf("Product = %.2f\n", a * b);
    printf("Quotient = %.2f\n", a / b);
    return 0;
}