#include <stdio.h>
#include <unistd.h>

void rush(int x, int y);
void put_char(char c);
void print_start(int a);
void print_middle(int a);
void print_end(int b);
int main()
{
  rush(5, 3);
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
        print_start(a);
      }
      else if (i == b)
      {
        print_end(a);
      }
      else
      {
        print_middle(a);
      }

      i++;
    }
  }
}

void print_start(int a)
{
  int i = 1;
  while (i <= a)
  {
    if (i == 1)
    {
      put_char(65); // 65: 'A'
    }
    else if (i == a)
    {
      put_char(67); // 67: 'C'
    }
    else
    {
      put_char(66); // 66: 'B'
    }

    i++;
  }
  put_char('\n');
}

void print_middle(int a)
{
  int i = 1;
  while (i <= a)
  {
    if (i == 1)
    {
      put_char(66);
    }
    else if (i == a)
    {
      put_char(66);
    }
    else
    {
      put_char(' ');
    }
    i++;
  }
  put_char('\n');
}

void print_end(int a)
{
  int i = 1;
  while (i <= a)
  {
    if (i == 1)
    {
      put_char(65);
    }
    else if (i == a)
    {
      put_char(67);
    }
    else
    {
      put_char(66);
    }

    i++;
  }
  put_char('\n');
};
void put_char(char c)
{
  write(1, &c, 1);
}