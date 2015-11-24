#include "../../includes/libft.h"

size_t			ft_arraylist_clear(t_arraylist *al, bool alsodata)
{
	void		**data;
	size_t		size;

	data = al->array;
	size = 0;
	if (al != NULL && (size = al->Count) != 0)
		ft_array_free(&data, alsodata);
	al->Count = 0;
	return (size);
}