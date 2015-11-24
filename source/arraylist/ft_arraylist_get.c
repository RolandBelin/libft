#include "../../includes/libft.h"

void			*ft_arraylist_get(t_arraylist *al, size_t index)
{
	if (al != NULL && al->Count > index)
		return (al->array[index]);
	return (NULL);
}