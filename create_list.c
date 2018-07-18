#include <stdio.h>

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

/* tpii : to pu in it */
t_ma_list	*create_list(t_ma_list *lst, char *tpii, char sep)
{
  int num_elem = 0;
  int longest_elem = 0;
  char *buff = NULL;
  t_main_data strct_data;
  
  my_putstr("-> in create list\n");
  my_putstr(tpii);
  my_putchar('\n');
  longest_elem = count_longest(tpii, sep);
  num_elem = my_strcount_char(tpii, sep);
  
  printf("il y a %d separateur et donc %d elements\n", num_elem, num_elem + 1);
  printf("le plus grand element est de taille : %d \n", longest_elem);

  buff = malloc(longest_elem * sizeof(char)); 
  
  free(buff);
  return lst;
}
