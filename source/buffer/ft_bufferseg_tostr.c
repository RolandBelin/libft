#include "../../includes/libft.h"

char 				*ft_bufferseg_tostr(t_bufferseg *bs)
{
	char 	*ret;
	UInt8	i;

	i = 0;
	if (bs)
	{
		ret = ft_strnew(bs->len);
		while (i < bs->len)
		{
			ret[i] = bs->data[i];
			++i;
		}
	}
	return (ret);
}