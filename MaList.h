#ifndef MALIST__H__
# define MALIST__H__

typedef struct s_ma_list
{
  unsigned int i;
  char *msg;
  struct s_ma_list *next;

}t_ma_list;

#endif
