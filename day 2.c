/*Q3. Area and Perimeter of Rectangle*/

#include <stdio.h>

int main()
{
    float length, breadth, area, perimeter;


    printf("Enter length and breadth: ");
    scanf("%f %f", &length, &breadth);

  
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);

    return 0;
}



//Q4. Area and Circumference of Circle

#include <stdio.h>

int main()
{
    float radius, area, circumference;
    const float PI = 3.14159;

    
    printf("Enter radius: ");
    scanf("%f", &radius);


    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);

    return 0;
}
