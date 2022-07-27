// Write a program to print all Prime numbers between two given numbers

#include <stdio.h>

int main()
{
    int a, b, i, j, min, max;

    printf("Enter two numbers");
    scanf("%d%d", &a, &b);

    min = a < b ? a : b;
    max = a > b ? a : b;

    for (i = min; i <= max; i++)
    {

        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
                break;
        }

        if (j == (i / 2) + 1)
        {
            printf("%d ", i);
        }
    }

    return 0;
}