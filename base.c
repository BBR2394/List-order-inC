#include <stdlib.h>
#include "my_str.h"
#include "base.h"

int	set_base(char *usedchar, int base, t_base *strctbase)
{
  my_putstr("dans base .c\n");
  strctbase->base = base;
  my_putstr("je avsi malloc\n");
  strctbase->character_used = malloc( sizeof(char) * my_strsize(usedchar));
  strctbase->character_used = my_strcpy(strctbase->character_used, usedchar);

  my_putstr("dans le set base\n");
  my_putstr(strctbase->character_used);
  my_putchar('\n');
  
  return -1;
}
