#include "../../includes/libft.h"

void 				ft_buffer_addchr(t_buffer *b, char c)
{
	t_bufferseg 	*seg;

	if (b)
	{
		if (ft_arraylist_isEmpty(b))
			ft_arraylist_add(b, ft_bufferseg_new());
		else if (((t_bufferseg *)b->array[b->Count - 1])->len == 32)
			ft_arraylist_add(b, ft_bufferseg_new());
		seg = (t_bufferseg *)b->array[b->Count - 1];
		seg->data[seg->len] = c;
		seg->len++;
	}
}