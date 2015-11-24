#include "../../includes/libft.h"

bool 				ft_bufferseg_canAddstr(t_bufferseg *bs, char *str)
{
	if ((bs != NULL && (str && *str)) && (ft_strlen(str) + bs->len < 32))
		return (true);
	return (false);
}