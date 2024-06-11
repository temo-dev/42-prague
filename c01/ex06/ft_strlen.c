#include <stdio.h>

int ft_strlen(char *str)
{
  int i = 0;
  while (str[i] != '\0')
  {
    i++;
  }
  return i;
}

int main(void)
{
  char *string;
  int number_characters;
  string = "hello-world";
  number_characters = ft_strlen(string);
  printf("%d\n", number_characters);
}