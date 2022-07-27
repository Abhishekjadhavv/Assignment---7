// Write a program to find the Nth term of the Fibonnaci series.

#include <stdio.h>

int main()
{

    int a = -1, b = 1, c,n,x;

    printf("Enter Nth term\n");
    scanf("%d", &n);
    x=n;

    while (x)
    {
        c = a + b;
        a = b;
        b = c;
        x--;
    }

    printf("%d term of the fibonnaci series is %d",n, c);
    return 0;
}