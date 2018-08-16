#include <stdio.h>

#include "rien.h"
#include "my_str.h"
#include "MaList.h"

/* attention pour le moment je ne manipule que des unsigned int donc de 0 a "un grand nombre" */ 
t_ma_list		*find_minimum(t_ma_list *lst)
{
	int min = lst->num;
	t_ma_list *le_min = NULL;

	lst = lst->next;
	while (lst->next != NULL)
	{
		if (lst->num < min)
		{
			min = lst->num;
			le_min = lst;
		}
		lst = lst->next;
	}
	printf("le minimum est %d\n", le_min->num);
	return le_min;
}

t_ma_list		*change_place_min_irst_and_remove_it(t_ma_list *min, t_ma_list *lst)
{
	t_ma_list *prev = NULL;
	t_ma_list *tmp = lst;
	while (tmp != min)
	{
		prev = tmp;
		tmp = tmp->next;
	}
	prev->next = tmp->next;
	min->next = lst;
	return min;
}

int 	selection_sort(t_main_data *st)
{
	t_ma_list *tmp = st->lst;
	t_ma_list *le_min = find_minimum(tmp);
	tmp = change_place_min_irst_and_remove_it(le_min, tmp);

	my_putstr("ici je vais afficher la liste apres le changement du minimun \n");
	print_list_whithout_main_data(tmp);
	while (tmp->next != NULL) 
	{
		tmp = tmp->next;
	}

	return 0;
}

int	bubble_sort(t_main_data *st)
{
	t_ma_list *tmp = NULL;

	

	return 0;
}

int	order_list(t_main_data *strct, int opt)
{
  my_putstr(" -> in order list function\n");
	
	if (opt == 1)
		bubble_sort(strct);
	else if (opt == 2)
		selection_sort(strct);

  return 0;
}
