#include "../../includes/libft.h"

char 				*ft_buffer_tonstring(t_buffer *b, size_t n)
{
	if (!ft_arraylist_isEmpty(b) && n > 0)
		return (ft_aatona(ft_buffer_toarray(b), n));
	else
		return (ft_strnew(0));
}