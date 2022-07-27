// Write a program to calculate HCF of two numbers

#include <stdio.h>

int main()
{
  int a, b;

  printf("Enter two numbers");
  scanf("%d%d", &a, &b);

  for (int i = a < b ? a : b; i > 0; i--)
  {

    if (a % i == 0 && b % i == 0)
    {
      printf("HCF Is %d", i);
      break;
    }

    if (i == (a < b ? a : b))
    {
      i /= 2;
    }
    
  }

  return 0;
}