#include "my_str.h"

int my_putchar(char c)
{
  return write(1, &c, 1);
}

int my_putstr(char *str)
{
  if (str[0] != '\0')
    {
      my_putchar(str[0]);
      my_putstr(&str[1]);
    }
  return 0;
}

int my_strcount_char(char *str, char car)
{
  int i = 0;
  int count = 0;
  
  while (str[i] != '\0')
    {
      if (str[i] == car)
	     count += 1;
      i++;
    }
  return count;
}

int my_strsize(char *str)
{
  int i = 0;
  while (str[i] != '\0')
    i++;
  return i;
}

char *my_strcpy(char *dest, char *rec)
{
  int i = 0;

  while (rec[i] != '\0') 
  {
    dest[i] = rec[i];
    i++;
  }
  return dest;
}