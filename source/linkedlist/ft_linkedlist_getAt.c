#include "../../includes/libft.h"

void		*ft_linkedlist_getAt(t_linkedlist *ll, size_t index)
{
	if (ft_linkedlist_containIndex(ll, index))
		return (ft_segment_getData(ft_linkedlist_getSegat(ll, index)));
	return (NULL);
}