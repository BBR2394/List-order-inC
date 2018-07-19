#include <stdio.h>
#include <stdlib.h>

#include "my_str.h"
#include "MaList.h"


int		count_longest(char *str, char sep)
{
  int i = 0;
  int i_lgst = 0;
  int lgst = 0;
  
  while (str[i] != '\0')
    {
      if (str[i] == sep)
	{
	  if (lgst < i_lgst)
	    lgst = i_lgst;
	  i_lgst = 0;
	}
      else
	i_lgst += 1;
      i++;
    }
  if (lgst < i_lgst)
    lgst = i_lgst;
  return lgst;
}

int	empty_buf(char *buf, int size)
{
  int i = 0;
  while (i < size)
    {
      buf[i] = '\0';
      i++;
    }
  return 0;
}

t_main_data	*insert_elem(t_main_data *lst, char *tpii, char sep, char *buf)
{
  int i = 0;
  int ibuf = 0;
  t_ma_list *tmp = NULL;
  t_ma_list *prev = NULL;
  
  while (tpii[i] != '\0')
    {
      if (tpii[i] == sep)
	     {
        if (ibuf != 0) {
          tmp = malloc (sizeof(t_ma_list));
          tmp->msg = malloc(sizeof(char) * my_strsize(buf));
          tmp->msg = my_strcpy(tmp->msg, buf);
          tmp->size = my_strsize(buf);
          if (prev == NULL) {
            lst->lst = tmp;
            tmp->next = NULL;
            prev = tmp;
            my_putstr("dans insert elemn au debut ");
            my_putstr(buf);
            my_putchar('\n');
          }
          else
          {
            tmp->next = NULL;
            prev->next = tmp;
            prev = tmp;
            my_putstr("dans insert elemn au apres ");
            my_putstr(buf);
            my_putchar('\n');
          }
        }
	       empty_buf(buf, count_longest(tpii, sep));
         ibuf = 0;
	     }
       else {
        buf[ibuf] = tpii[i];
        ibuf++;
      }
      i++;
    }
    if (ibuf != 0) {
          tmp = malloc (sizeof(t_ma_list));
          tmp->msg = malloc(sizeof(char) * my_strsize(buf));
          tmp->msg = my_strcpy(tmp->msg, buf);
          tmp->next = NULL;
          tmp->size = my_strsize(buf);
          prev->next = tmp;
          prev = tmp;
          my_putstr("dans insert elemn au a la fin ");
          my_putstr(buf);
          my_putchar('\n');
        }
    return 0;
}

int print_list(t_main_data *lst)
{
  t_ma_list *the_list = lst->lst;
  int i = 0;
  int stop = 0;

  while (stop == 0) {
    if (the_list->next == NULL)
      stop = 1;
    printf("Dans l'element %d\n ->  %s \n", i, the_list->msg);
    i++;
    the_list = the_list->next;
  }
  return 0;
}

/* tpii : to put in it */
t_main_data	*create_list(t_main_data *lst, char *tpii, char sep)
{
  int num_elem = 0;
  int longest_elem = 0;
  char *buff = NULL;

  my_putstr("-> in create list\n");
  my_putstr(tpii);
  my_putchar('\n');
  longest_elem = count_longest(tpii, sep);
  num_elem = my_strcount_char(tpii, sep);
  
  printf("il y a %d separateur et donc %d elements\n", num_elem, num_elem + 1);
  printf("le plus grand element est de taille : %d \n", longest_elem);

  buff = malloc(longest_elem * sizeof(char));
  empty_buf(buff, longest_elem);
  insert_elem(lst, tpii, sep, buff);
  print_list(lst);
  free(buff);
  return lst;
}
