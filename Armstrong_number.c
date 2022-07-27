// Write a program to check whether a given number is an Armstrong number
// or not

#include <stdio.h>

int main()
{
    int n, r, sum = 0, x;

    printf("Enter a number");
    scanf("%d", &n);
    x = n;
    while (x)
    {
        r = x % 10;
        sum += r * r * r;
        x /= 10;
    }

    if (sum == n)
    {
        printf("Given number is an armstrong number");
    }
    else
    {
        printf("Given number is not an armstrong number");
    }

    return 0;
}