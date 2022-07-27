// Write a program to find next Prime number of a given number

#include <stdio.h>

int main()
{
    int num, x, i;

    printf("Enter a number");
    scanf("%d", &num);
    x = num + 1;
    while (1)
    {

        for (i = 2; i <= x / 2; i++)
        {
            if (x % i == 0)
            {
                break;
            }
        }

        if (i == (x / 2) + 1)
        {
            printf("next prime number %d", x);
            break;
        }
        else
        {
            x++;
        }
    }
    return 0;
}