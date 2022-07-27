// Write a program to print first N terms of Fibonacci series


#include <stdio.h>

int main()
{

    int a = -1, b = 1, c, n;

    printf("Enter a number");
    scanf("%d", &n);

    while (n)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
        n--;
    }

    return 0;
}