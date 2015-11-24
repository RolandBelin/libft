#include "../../includes/libft.h"

t_segment		*ft_segment_setNext(t_segment *seg, t_segment *next)
{
	if (seg != NULL)
		seg->next = next;
	return (seg);
}