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
  t_main_data	*main_data;
  t_base *strct_base;
  print_arg(ac, av);
  
  main_data = malloc(sizeof(t_main_data));
  write(1, "bonjour\n", 8);
  my_putstr("bonjour deux\n");
  strct_base = malloc(sizeof(t_base));
  set_base("0123456789", 10, strct_base);

  main_data = create_list(main_data, "52-68-46-456-4568-12-78-65-98-159-357-2-7-954-362", '-');
  if (ac > 1)
    {
      create_list(main_data, av[1], '-');
    }
  else
    my_putstr("il n'y a pas de suite en argument\n");

  int opt = 2;

  order_list(main_data, opt);
  my_putstr("le resultat : \n");
  print_list_main_data(main_data);
  // free(main_data);
  return 0;
}
