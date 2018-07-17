#include "my_str.h"
#include "MaList.h"

/* tpii : to pu in it */
t_ma_list *create_list(t_ma_list *lst, char *tpii, char sep)
{
  int num_elem = 0;
  
  my_putstr("-> in create list\n");
  my_putstr(tpii);
  my_putchar('\n');

  num_elem = my_strcount_char(tpii, sep);
  printf("il y a %d separateur et donc %d elements\n", num_elem, num_elem + 1);
  return lst;
}
