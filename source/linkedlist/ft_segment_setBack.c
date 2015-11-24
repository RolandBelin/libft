#include "../../includes/libft.h"

t_segment		*ft_segment_setBack(t_segment *seg, t_segment *back)
{
	if (seg != NULL)
		seg->back = back;
	return(seg);
}