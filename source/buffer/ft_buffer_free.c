#include "../../includes/libft.h"

void 				ft_buffer_free(t_buffer **b)
{
	ft_arraylist_free(b, true);
}