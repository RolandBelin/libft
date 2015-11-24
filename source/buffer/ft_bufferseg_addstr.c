#include "../../includes/libft.h"

bool		ft_bufferseg_addstr(t_bufferseg *bs, char *str)
{
	size_t 	i;

	i = 0;
	if (ft_bufferseg_canAddstr(bs, str))
	{
		while (str[i])
		{
			bs->data[bs->len + i] = str[i];
			++i;
		}
		bs->len = bs->len + i;
		return (true);
	}
	else
		return (false);
}