#include <stdio.h>
#include <string.h>

#include <unistd.h>

char *ft_strcpy(char *dest, char *src)
{
  unsigned int i;

  i = 0;
  while (src[i] != '\0')
  {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';
  return (dest);
}