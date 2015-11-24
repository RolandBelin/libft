#include "../../includes/libft.h"

bool		ft_arraylist_add(t_arraylist *al, void *data)
{
	if ((ft_arraylist_ensureCapacity(al, al->Count + 1)) == false)
		return (false);
	al->array[al->Count++] = data;
	return (true);
}