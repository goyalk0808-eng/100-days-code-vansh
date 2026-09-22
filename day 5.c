/*Q9. Simple and Compound Interest*/

#include <stdio.h>
#include <math.h>

int main()
{
    float p, r, t;
    float simpleInterest, compoundInterest, amount;

  
    printf("Enter principal, rate and time: ");
    scanf("%f %f %f", &p, &r, &t);

  
    simpleInterest = (p * r * t) / 100;

    amount = p * pow((1 + r / 100), t);

    compoundInterest = amount - p;

    printf("Simple Interest = %.2f\n", simpleInterest);
    printf("Compound Interest = %.2f\n", compoundInterest);

    return 0;
}

//Q10. Convert Seconds to Hours:Minutes

#include <stdio.h>

int main()
{
    int totalSeconds, hours, minutes, seconds;

   
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);


    hours = totalSeconds / 3600;

   
    totalSeconds = totalSeconds % 3600;

    
    minutes = totalSeconds / 60;

    seconds = totalSeconds % 60;

    printf("Time = %02d:%02d:%02d", hours, minutes, seconds);

    return 0;
}