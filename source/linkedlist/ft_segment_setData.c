#include "../../includes/libft.h"

t_segment 		*ft_segment_setData(t_segment *seg, void *data)
{
	if (seg != NULL)
		seg->data = data;
	return (seg);
}