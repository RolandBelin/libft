#include "../../includes/libft.h"

bool 		ft_arraylist_isEmpty(t_arraylist *al)
{
	if (al == NULL)
		return (true);
	else if (al->Count == 0)
		return (true);
	else
		return (false);
}