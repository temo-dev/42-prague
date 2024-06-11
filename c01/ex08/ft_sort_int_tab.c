#include <stdio.h>

void ft_swap(int *tab, int a, int b)
{
  int value_swap;

  value_swap = tab[a];
  tab[a] = tab[b];
  tab[b] = value_swap;
}

void ft_sort_int_tab(int *tab, int size)
{
  int i = 0, a, b;

  a = 0;
  while (a <= (size - 1))
  {
    b = a + 1;
    while (b <= (size - 1))
    {
      if (tab[a] > tab[b])
      {
        ft_swap(tab, a, b);
      }
      b++;
    }
    a++;
  }
}

int main(void)
{
  int *tab, size;
  size = 7;
  int numbers[7] = {8, 7, 6, 0, 1, 9, 9};
  tab = numbers;
  ft_sort_int_tab(tab, size);

  int i = 0;
  while (i <= (size - 1))
  {
    printf("tab-%d \n", tab[i]);
    i++;
  }
}