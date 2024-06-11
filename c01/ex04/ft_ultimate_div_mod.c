#include <stdio.h>
void ft_ultimate_div_mod(int *a, int *b)
{
  int x, y;
  x = *a;
  y = *b;
  *a = x / y;
  *b = x % y;
}

int main(void)
{
  int i = 10, y = 3, *a, *b;
  a = &i;
  b = &y;
  ft_ultimate_div_mod(a, b);
}