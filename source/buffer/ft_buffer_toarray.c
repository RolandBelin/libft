#include "../../includes/libft.h"

char		**ft_buffer_toarray(t_buffer *b)
{
	size_t	i;
	char 	**ar;

	ar = NULL;
	if (!ft_arraylist_isEmpty(b))
	{
		i = 0;
		ar = (char **)ft_array_new(b->Count);
		while (i < b->Count)
		{
			ar[i] = ft_bufferseg_tostr((t_bufferseg *)b->array[i]);
			++i;
		}
	}
	return (ar);
}