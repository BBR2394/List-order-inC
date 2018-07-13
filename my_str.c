#include "my_str.h"

int my_put_char(char c)
{
  write(1, &c, 1);
}

int my_put_str(char *str)
{
  if (str[0] != '\0')
    {
      my_put_char(str[0]);
      my_put_str(&str[1]);
    }
  else
    return 0;
}
