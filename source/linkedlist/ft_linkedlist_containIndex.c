#include "../../includes/libft.h"

bool 		ft_linkedlist_containIndex(t_linkedlist *ll, size_t index)
{
	if (ft_linkedlist_isEmpty(ll))
		return (false);
	else if (ll->Count - 1 < index)
		return (false);
	return (true);
}