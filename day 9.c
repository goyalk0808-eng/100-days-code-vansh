/*Q17. Roots of a Quadratic Equation*/

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float d, root1, root2;
    float realPart, imaginaryPart;

    printf("Enter a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate discriminant
    d = b * b - 4 * a * c;

    if (d > 0)
    {
        // Two distinct real roots
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);

        printf("Two distinct real roots\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    else if (d == 0)
    {
        // Two equal roots
        root1 = -b / (2 * a);

        printf("Two equal real roots\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    }
    else
    {
        // Complex roots
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-d) / (2 * a);

        printf("Complex roots\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }

    return 0;
}

//Q18. Grade Based on Percentage

#include <stdio.h>

int main()
{
    float percentage;

    printf("Enter percentage: ");
    scanf("%f", &percentage);

    if (percentage >= 90 && percentage <= 100)
        printf("Grade A");
    else if (percentage >= 80)
        printf("Grade B");
    else if (percentage >= 70)
        printf("Grade C");
    else if (percentage >= 60)
        printf("Grade D");
    else if (percentage >= 0)
        printf("Grade F");
    else
        printf("Invalid percentage");

    return 0;
}
