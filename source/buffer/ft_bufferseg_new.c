#include "../../includes/libft.h"

t_bufferseg 		*ft_bufferseg_new(void)
{
	t_bufferseg 	*bs;

	bs = NULL;
	if ((bs = (t_bufferseg *)malloc(sizeof(t_bufferseg))) != NULL)
		ft_bufferseg_clear(bs);
	return (bs);
}