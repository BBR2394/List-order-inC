#include <stdio.h>

#include "rien.h"
#include "my_str.h"
#include "MaList.h"

/* attention pour le moment je ne manipule que des unsigned int donc de 0 a "un grand nombre" */ 
t_ma_list		*find_minimum(t_ma_list *lst)
{
	int min = lst->num;
	t_ma_list *le_min = lst;

	lst = lst->next;
	while (lst != NULL)
	{
		if (lst->num < min)
		{
			min = lst->num;
			le_min = lst;
		}
		lst = lst->next;
	}
	if (lst == NULL)
		return le_min;
	return le_min;
}

t_ma_list		*change_place_min_first_and_remove_it(t_ma_list *min, t_ma_list *lst)
{
	t_ma_list *prev = NULL;
	t_ma_list *tmp = lst;

	if (tmp == min) {
		return min;
	}

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
	t_ma_list *niou_lst = NULL;
	t_ma_list *to_return = NULL;
	tmp = change_place_min_first_and_remove_it(le_min, tmp);
	
	le_min = NULL;
	niou_lst = tmp;
	to_return = tmp;
	tmp = tmp->next;

	while (tmp->next != NULL) 
	{
		le_min = find_minimum(tmp);
		tmp = change_place_min_first_and_remove_it(le_min, tmp);
		niou_lst->next = tmp;
		niou_lst = niou_lst->next;
		tmp = tmp->next;
	}
	st->lst = to_return;
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
