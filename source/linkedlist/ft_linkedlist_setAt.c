#include "../../includes/libft.h"

void			ft_linkedlist_setAt(t_linkedlist *ll, void* data, size_t index)
{
	if (ll == NULL && ((ll = ft_linkedlist_new()) == NULL))
			return;
	if (!ft_linkedlist_containIndex(ll, index))
		ft_linkedlist_expendLast(ll, (index + 1) - ll->Count);
	ft_segment_setData(ft_linkedlist_getSegat(ll, index), data);
}