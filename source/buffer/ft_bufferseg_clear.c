#include "../../includes/libft.h"

void 	ft_bufferseg_clear(t_bufferseg *bs)
{
	if (bs != NULL)
	{
		bs->len = 0;
		while (bs->len < 32)
		{
			bs->data[bs->len] = '\0';
			bs->len++;
		}
		bs->len = 0;
	}
}