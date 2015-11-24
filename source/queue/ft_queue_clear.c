#include "../../includes/libft.h"

void 		ft_queue_clear(t_queue *q, bool alsofree)
{
	ft_linkedlist_removeAll(q, alsofree);
}