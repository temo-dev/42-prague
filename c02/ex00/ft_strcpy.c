#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src)
{
  printf("%p \n", &dest);
  printf("%p \n", &src);
  int i = 0;
  while (src[i] != '\0')
  {
    dest[i] = src[i];
    i++;
  }

  return dest;
}

int main(void)
{
  char str_1[20] = "hello-world";
  char str_2[20];
  ft_strcpy(str_2, str_1);
  // strcpy(str_2, str_1);

  int i = 0;
  while (str_2[i] != '\0')
  {
    printf("%c", str_2[i]);
    i++;
  }

  return (0);
}