#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#include "rien.h"
#include "my_str.h"
#include "MaList.h"

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
  t_ma_list *malist;

  print_arg(ac, av);
  
  malist = malloc(sizeof(t_ma_list));
  write(1, "bonjour\n", 8);
  my_putstr("bonjour deux\n");
  malist->msg = "bonjour\n";
  my_putstr(malist->msg);
  free(malist);
  malist = create_list(malist, "52-68-46", '-');
  return 0;
}
