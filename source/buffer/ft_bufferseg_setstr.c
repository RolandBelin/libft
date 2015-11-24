#include "../../includes/libft.h"

void 		ft_bufferseg_setstr(t_bufferseg *seg, char *str)
{
	size_t	i;

	i = 0;
	if (seg && str)
	{
		while (i < 32 && str[i])
		{
			seg->data[i] = str[i];
			++i;
		}
		seg->len = i + 1;
	}
}