#include "../../includes/libft.h"

void		*ft_queue_dequeue(t_queue *q)
{
	void 	*ret;

	ret = NULL;
	if (ft_linkedlist_isEmpty(q) == false)
	{
		ret = q->Last;
		ft_linkedlist_removeLast(q, false);
	}
	return (ret);
}