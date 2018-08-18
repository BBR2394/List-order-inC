/*
* @Author: Baptiste Bertrand-Rapello
* @Date:   2018-08-18 16:35:39
* @Last Modified by:   Baptiste Bertrand-Rapello
* @Last Modified time: 2018-08-18 16:46:56
*/

#include <stdlib.h>

#include "rien.h"


int free_everything(t_main_data *md)
{
	t_ma_list *lst = md->lst;
	t_ma_list *tmp = NULL;

	while (lst != NULL)
	{
		tmp = lst;
		free(lst->msg);
		lst = lst->next;
		free(tmp);
	}
	free(md);
	return 0;
}