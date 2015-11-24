#include "../../includes/libft.h"

void 	ft_bufferseg_free(t_bufferseg **bs)
{
	if (bs != NULL && *bs != NULL)
	{
		ft_bufferseg_clear(*bs);
		free(*bs);
		*bs = NULL;
		bs = NULL;
	}
}