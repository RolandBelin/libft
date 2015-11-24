#include "../../includes/libft.h"

void			*ft_segment_getData(t_segment *seg)
{
	if (seg != NULL)
		return (seg->data);
	else
		return (NULL);
}