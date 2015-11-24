#include "../../includes/libft.h"

bool	ft_bufferseg_canAddchr(t_bufferseg *bs)
{
	if (bs != NULL && bs->len < 32)
		return (true);
	return (false);
}