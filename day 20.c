/*Q39. Product of Odd Digits*/

#include <stdio.h>

int main()
{
    int n, digit;
    int product = 1;
    int found = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
       

        if (digit % 2 != 0)
        {
            product = product * digit;
            found = 1;
        }

       
        n = n / 10;
    }

    if (found == 1)
        printf("Product of odd digits = %d", product);
    else
        printf("There are no odd digits.");

    return 0;
}

//Q40. 1's Complement of a Binary Number

#include <stdio.h>

int main()
{
    long long binary, digit;
    long long complement = 0;
    long long place = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary != 0)
    {
     
        digit = binary % 10;

    
        if (digit == 0)
            digit = 1;
        else
            digit = 0;

       
        complement = complement + digit * place;

        place = place * 10;

      
        binary = binary / 10;
    }

    printf("1's Complement = %lld", complement);

    return 0;
}