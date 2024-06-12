#include <stdio.h>

int ft_str_is_alpha(char *str)
{
  int isAlphabet = 0;
  int i = 0;
  int char_converted_to_num;

  if (str[0] == '\0')
  {
    return isAlphabet = 1;
  }

  while (str[i] != '\0')
  {
    char_converted_to_num = str[i] - '0';
    if (
        char_converted_to_num >= 65 &&
            char_converted_to_num <= 90 ||
        char_converted_to_num >= 97 &&
            char_converted_to_num <= 122 ||
        char_converted_to_num == -16)
    {
      isAlphabet = 1;
    }
    else
    {
      isAlphabet = 0;
      break;
    }
    i++;
  }
  return isAlphabet;
}

int main(void)
{
  char str_1[20] = "hUllo world";
  char str_2[20] = "!@#$%^&";
  char str_3[20];
  int a = ft_str_is_alpha(str_1);
  printf("%d \n", a);
  // ft_str_is_alpha(str_2);
  return 0;
}