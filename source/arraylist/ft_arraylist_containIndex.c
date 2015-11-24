#include "../../includes/libft.h"

bool		ft_arraylist_containIndex(t_arraylist *al, size_t index)
{
	if (al && al->Count > index)
		return (true);
	return (false);
}