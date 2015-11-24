#include "../../includes/libft.h"

t_arraylist		*ft_arraylist_newn(size_t n)
{
	size_t 		s;
	t_arraylist	*al;

	s = (n > 10) ? n : 10;
	if ((al = (t_arraylist *)malloc(sizeof(t_arraylist))) != NULL)
	{
		al->Count = 0;
		al->Capacity = s;
		if ((al->array = ft_array_new(s)) != NULL)
			return (al);
	}
	return (NULL);
}