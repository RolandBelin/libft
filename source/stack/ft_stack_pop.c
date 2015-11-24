#include "../../includes/libft.h"

void				*ft_stack_pop(t_stack *s)
{
	void 			*data;
	
	data = NULL;
	if (!ft_arraylist_isEmpty(s))
	{
		data = s->array[s->Count];
		s->array[s->Count--] = NULL;
	}
	return (data);
}