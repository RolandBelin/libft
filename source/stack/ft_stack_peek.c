#include "../../includes/libft.h"

void		*ft_stack_peek(t_stack *s)
{
	if (!ft_arraylist_isEmpty(s))
		return (s->array[s->Count - 1]);
	return (NULL);
}