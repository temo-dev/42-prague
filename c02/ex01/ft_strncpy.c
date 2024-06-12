#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
  int i = 0;
  while (i < n)
  {
    dest[i] = src[i];
    i++;
  }
  return dest;
}

int main(void)
{
  char str_1[20] = "hello world";
  char str_2[9];
  // ft_strncpy(str_2, str_1, 9);
  strncpy(str_2, str_1, 9);
  int i = 0;
  while (str_2[i] != '\0')
  {
    printf("%c", str_2[i]);
    i++;
  }
}