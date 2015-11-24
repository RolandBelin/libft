#include "../../includes/libft.h"

bool			ft_arraylist_remove(t_arraylist *al, size_t index, bool alsofree)
{
	size_t	i;

	if (!al || (ft_arraylist_containIndex(al, index)) == false)
		return (false);
	i = ft_array_size(al->array);
	if (alsofree == true)
		free(al->array[index]);
	while (index++ < (i - 1))
		al->array[index] = al->array[index];
	al->array[index] = NULL;
	al->Count--;
	return (true);
}