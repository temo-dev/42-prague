#include <stdio.h>

void ft_swap(int *a, int *b)
{
  int swap;
  swap = *a;
  *a = *b;
  *b = swap;
  printf("Swapping \n");
}

// int main(void)
// {
//   int x = 1, y = 2, *a, *b;
//   a = &x;
//   b = &y;
//   printf("this is a: %d \n", *a);
//   printf("this is b: %d \n", *b);
//   ft_swap(a, b);
//   printf("this is a: %d \n", *a);
//   printf("this is b: %d \n", *b);
// }