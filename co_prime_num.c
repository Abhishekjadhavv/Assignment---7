// Write a program to check whether two given numbers are co-prime
// numbers or not

#include <stdio.h>

int main()
{

    int a, b, i;

    printf("Enter two number");
    scanf("%d%d", &a, &b);

    for (i = a < b ? a : b; i > 1; i--)
    {

        if (a % i == 0 && b % i == 0)
        {
            break;
        }

        i == (a < b ? a : b)?i/2:i;
    }

    if (i == 1)
    {
        printf("these are co-prime numbers");
    }
    else
    {
        printf("these are not co-prime numbers");
    }

    return 0;
}