#include "../../includes/libft.h"

void			ft_arraylist_free(t_arraylist **al, bool alsodata)
{
	if (!al || !*al)
		return;
	if ((*al)->array)
		ft_array_free(&(*al)->array, alsodata);
	(*al)->Count = 0;
	(*al)->Capacity = 0;
	free(*al);
	*al = NULL;
	al = NULL;
}