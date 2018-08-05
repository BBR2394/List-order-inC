#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#include "rien.h"
#include "my_str.h"
#include "MaList.h"
#include "order_list.h"
#include "base.h"

int print_arg(int ac, char **av)
{
  my_putstr("-> dans print arg : \n");
  printf("    ac = %d\n", ac);
  my_putstr("et av");
  my_putstr(av[ac-1]);
  my_putchar('\n');
  return 0;
}

int main(int ac, char **av)
{
  t_main_data	*malist;
  t_base *strct_base;
  print_arg(ac, av);
  
  malist = malloc(sizeof(t_main_data));
  write(1, "bonjour\n", 8);
  my_putstr("bonjour deux\n");
  strct_base = malloc(sizeof(t_base));
  set_base("0123456789", 10, strct_base);

  malist = create_list(malist, "52-68-46-456", '-');
  if (ac > 1)
    {
      create_list(malist, av[1], '-');
    }
  else
    my_putstr("il n'y a pas de suite en argument\n");

  int opt = 1;
  order_list(strct_base, malist, opt);
  free(malist);
  return 0;
}
