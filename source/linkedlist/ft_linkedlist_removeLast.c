#include "../../includes/libft.h"

void			ft_linkedlist_removeLast(t_linkedlist *ll, bool alsofreedata)
{
	t_segment	*back;

	back = NULL;
	if (!ft_linkedlist_isEmpty(ll))
	{
		back = ll->Last->back;
		if (back != NULL)
		{
			ft_segment_setNext(back, NULL);
			if (back->back == NULL)
				ll->First = back;
		}
		else
			ll->First = NULL;
		if (alsofreedata)
				ft_segment_free(&ll->Last, alsofreedata);
		ll->Last = back;
		ll->Count--;
	}
}