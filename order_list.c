#include <stdio.h>

#include "rien.h"
#include "my_str.h"
#include "MaList.h"
#include "selection_sort.h"
#include "bubble_sort.h"
#include "insertion_sort.h"

int	order_list(t_main_data *strct, int opt)
{
  my_putstr(" -> in order list function\n");
	
	if (opt == 1)
		bubble_sort(strct);
	else if (opt == 2)
		selection_sort(strct);
	else if (opt == 3)
		insertion_sort(strct);
  return 0;
}
