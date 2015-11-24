#include "../../includes/libft.h"

size_t		ft_array_size(void **ar)
{
	size_t ret;

	ret = 0;
	if (ar != NULL)
	{
		while (ar[ret])
			++ret;
	}
	return (ret);
}