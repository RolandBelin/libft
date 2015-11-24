#include "../../includes/libft.h"

t_buffer 		*ft_buffer_new(void)
{
	t_buffer	*b;

	b = ft_arraylist_new();
	return (b);
}