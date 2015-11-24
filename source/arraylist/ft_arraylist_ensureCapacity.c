#include "../../includes/libft.h"

bool		ft_arraylist_ensureCapacity(t_arraylist *al, size_t min)
{
	if (al->Capacity > min)
		return (true);
	else if (ft_array_resize(&al->array, (((al->Capacity * 3) / 2 ) + 1)) == true)
	{
		al->Capacity = (((al->Capacity * 3) / 2 ) + 1);
		return (true);
	}
	else
		return (false);
}