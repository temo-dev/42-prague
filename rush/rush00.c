#include <stdio.h>
#include <unistd.h>

void rush(int x, int y);
void put_char(char c);
void print_x(int a);
void print_y(int b);
int main()
{
  rush(4, 4);
}

void rush(int a, int b)
{
  if (a > 0 && b > 0)
  {
    int i = 1;
    while (i <= b) // loop colums
    {
      if (i == 1)
      {
        print_x(a);
      }
      else if (i == b)
      {
        print_x(a);
      }
      else
      {
        print_y(a);
      }

      i++;
    }
  }
}

void print_x(int a)
{
  int i = 1;
  while (i <= a)
  {
    if (i == 1)
    {
      put_char('o');
    }
    else if (i == a)
    {
      put_char('o');
    }
    else
    {
      put_char('-');
    }

    i++;
  }
  put_char('\n');
}

void print_y(int a)
{
  int i = 1;
  while (i <= a)
  {
    if (i == 1)
    {
      put_char('|');
    }
    else if (i == a)
    {
      put_char('|');
    }
    else
    {
      put_char(' ');
    }
    i++;
  }
  put_char('\n');
}

void put_char(char c)
{
  write(1, &c, 1);
}