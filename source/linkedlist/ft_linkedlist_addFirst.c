#include "../../includes/libft.h"

void			ft_linkedlist_addFirst(t_linkedlist *ll, void *data)
{
	t_segment 	*seg;
	t_segment	*old_first;

	old_first = NULL;
	if ((ll != NULL) && ((seg = ft_segment_new()) != NULL))
	{
		old_first = ll->First;
		ft_segment_setData(seg, data);
		ft_segment_setNext(seg, old_first);
		if (ll->Last == NULL)
			ll->Last = seg;
		if (old_first != NULL)
			ft_segment_setBack(old_first, seg);
		ll->First = seg;
		ll->Count++;
	}
}
