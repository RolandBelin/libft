#include "../../includes/libft.h"

t_queue 			*ft_queue_new(void)
{
	return ((t_queue *)ft_linkedlist_new());
}