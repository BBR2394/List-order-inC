#ifndef MALIST__H__
# define MALIST__H__

typedef struct s_ma_list
{
  unsigned int num;
  char *msg;
  int size;
  struct s_ma_list *next;

}t_ma_list;

typedef struct s_main_data
{
  int	longest_elem;
  int	num_elem;

  struct s_ma_list	*lst;
  
}t_main_data;

#endif
