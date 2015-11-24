#include "../../includes/libft.h"

bool		ft_queue_enqueue(t_queue *q, void *data)
{
	if (q == NULL)
		return (false);
	if (data)
		ft_linkedlist_addLast(q, data);
	return (true);
}