#include "../../includes/libft.h"

size_t		ft_buffer_len(t_buffer *b)
{
	size_t	i;
	size_t 	ret;

	ret = 0;
	if (!ft_arraylist_isEmpty(b))
	{
		i = 0;
		while (i < b->Count)
		{
			ret = ret + ((t_bufferseg *)b->array[i])->len;
			++i;
		}
	}
	return (ret);
}