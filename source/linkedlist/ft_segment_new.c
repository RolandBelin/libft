#include "../../includes/libft.h"

t_segment		*ft_segment_new(void)
{
	t_segment	*new_seg;

	new_seg = NULL;
	if ((new_seg = (t_segment *)malloc(sizeof(t_segment))) != NULL)
	{
		new_seg->data = NULL;
		new_seg->next = NULL;
		new_seg->back = NULL;
	}
	return (new_seg);
}