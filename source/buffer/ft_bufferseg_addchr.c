#include "../../includes/libft.h"

bool 				ft_bufferseg_addchr(t_bufferseg *bs, char c)
{
	if (ft_bufferseg_canAddchr(bs))
	{
		bs->data[bs->len] = c;
		bs->len++;
		return (true);
	}
	return (false);
}