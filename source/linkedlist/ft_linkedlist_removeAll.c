#include "../../includes/libft.h"

void			ft_linkedlist_removeAll(t_linkedlist *ll, bool alsofree)
{
	if (!ft_linkedlist_isEmpty(ll))
	{
		while (ll->First)
			ft_linkedlist_removeLast(ll, alsofree);
	}
}