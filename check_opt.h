#ifndef CHECK_OPT_H_
# define CHECK_OPT_H_

typedef struct s_opt_list
{
  short size_opt_name;
  char opt_char;
  char *opt_name;
  char *arg;
  struct s_opt_list *next;
}	t_opt_list;

#endif
