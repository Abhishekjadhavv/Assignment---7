// Write a program to print all Armstrong numbers under 1000

#include <stdio.h>

int main()
{

    int r, sum, x;

    for (int i = 1; i <= 1000; i++)
    {
        sum = 0;
        x = i;
        while (x)
        {
            r = x % 10;
            sum += r * r * r;
            x/=10;
        }

        if (sum == i)
            printf("%d ", i);
    }

    return 0;
}