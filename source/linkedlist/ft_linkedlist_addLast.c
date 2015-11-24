#include "../../includes/libft.h"

void			ft_linkedlist_addLast(t_linkedlist *ll, void *data)
{
	t_segment	*seg;
	t_segment	*old_last;

	old_last = NULL;
	if ((ll != NULL) && (seg = ft_segment_new()) != NULL)
	{
		old_last = ll->Last;
		ft_segment_setData(seg, data);
		ft_segment_setBack(seg, old_last);
		if (old_last != NULL)
		{
			ft_segment_setNext(old_last, seg);
			if (ll->First == NULL)
				ll->First = old_last;
		}
		if (ll->First == NULL)
			ll->First = seg;
		ll->Count++;
		ll->Last = seg;
	}
}