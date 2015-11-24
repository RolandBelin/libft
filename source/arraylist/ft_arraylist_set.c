#include "../../includes/libft.h"

void			*ft_arraylist_set(t_arraylist *al, size_t index, void *data)
{
	void		*old_data;

	old_data = NULL;
	if (al != NULL && index < al->Count)
	{
		old_data  = al->array[index];
		al->array[index] = data;
	}
	return (old_data);
}