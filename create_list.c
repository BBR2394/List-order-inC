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
  
  while (tpii[i] != 0)
    {
      if (tpii[i] == sep)
	{
	  empty_buf(buf, count_longest(tpii, sep));
	}
      ibuf++;
      i++;
    }
}

/* tpii : to pu in it */
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
  free(buff);
  return lst;
}
