#include <unistd.h>
#include <stdlib.h>
#include "rien.h"
#include "my_str.h"
#include "MaList.h"

int main()
{
  t_ma_list *malist;

  malist = malloc(sizeof(t_ma_list));
  write(1, "bonjour\n", 8);
  my_put_str("bonjour deux\n");
  malist->msg = "bonjour\n";
  my_put_str(malist->msg);
  free(malist);
  return 0;
}
