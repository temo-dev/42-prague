#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
  int reverse_numbers[size], i, count, j;
  i = 0;
  while (i <= (size - 1))
  {
    count = size - 1 - i;
    reverse_numbers[i] = tab[count];
    i++;
  }

  j = 0;
  while (j <= (size - 1))
  {
    tab[j] = reverse_numbers[j];
    j++;
  }
  printf("=======reverse \n");
}

int main(void)
{
  int *tab, size;
  size = 4;
  int numbers[4] = {1, 2, 3, 4};
  tab = &numbers[0];
  printf("%d \n", tab[0]);
  printf("%d \n", tab[1]);
  printf("%d \n", tab[2]);
  printf("%d \n", tab[3]);
  ft_rev_int_tab(tab, size);
  printf("%d \n", tab[0]);
  printf("%d \n", tab[1]);
  printf("%d \n", tab[2]);
  printf("%d \n", tab[3]);
}