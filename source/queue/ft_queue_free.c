#include "../../includes/libft.h"

void 		ft_queue_free(t_queue **q, bool alsodata)
{
	ft_linkedlist_free(q, alsodata);
}