#ifndef RIEN__H__
# define RIEN__H__

# include "MaList.h"
# include "base.h"

t_main_data *create_list(t_main_data *lst, char *, char );
int     set_base(char *, int , t_base *);
int 	print_list(t_ma_list *lst);
int 	print_list_main_data(t_main_data *md);

#endif
