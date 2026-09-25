/*Q19. Classify a Triangle*/

#include <stdio.h>

int main()
{
    float a, b, c;

    printf("Enter three sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Checking whether the sides can form a triangle
    if (a + b <= c || a + c <= b || b + c <= a)
    {
        printf("Invalid triangle");
    }
    else if (a == b && b == c)
    {
        printf("Equilateral triangle");
    }
    else if (a == b || b == c || a == c)
    {
        printf("Isosceles triangle");
    }
    else
    {
        printf("Scalene triangle");
    }

    return 0;
}

//Q20. Day of Week Using Switch-Case

#include <stdio.h>

int main()
{
    int day;

    printf("Enter day number (1-7): ");
    scanf("%d", &day);

    switch (day)
    {
        case 1:
            printf("Monday");
            break;

        case 2:
            printf("Tuesday");
            break;

        case 3:
            printf("Wednesday");
            break;

        case 4:
            printf("Thursday");
            break;

        case 5:
            printf("Friday");
            break;

        case 6:
            printf("Saturday");
            break;

        case 7:
            printf("Sunday");
            break;

        default:
            printf("Invalid day number");
    }

    return 0;
}
