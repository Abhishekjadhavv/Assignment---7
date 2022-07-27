// Write a program to check whether a given number is there in the Fibonacci
// series or not.

#include <stdio.h>

int main()
{
    int x = -1, y = 1, z, num, m, nth_num = 0;

    printf("Enter a number");
    scanf("%d", &num);
    m = num;

    while (1)
    {
        z = x + y;
        if (z == num)
        {
            nth_num = 1;
            break;
        }
        else if (z > num)
        {
            nth_num = 0;
            break;
        }
        x = y;
        y = z;
    }

    if (nth_num)
    {
        printf("This is Fibonacci number\n");
    }
    else
    {
        printf("This is not fibonacci number\n");
    }
    return 0;
}