#include "../../includes/libft.h"

void		ft_arraylist_trimtosize(t_arraylist *al)
{
	if (al == NULL || (al->Capacity > al->Count))
		return;
	if ((ft_array_resize(&al->array, al->Count)) == true)
		al->Capacity = al->Count;
}