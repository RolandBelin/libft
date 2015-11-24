#include "../../includes/libft.h"

void			ft_linkedlist_removeFirst(t_linkedlist *ll, bool alsofreedata)
{
	t_segment	*next;

	next = NULL;
	if (!ft_linkedlist_isEmpty(ll))
	{
		next = ll->First->next;
		if (next != NULL)
		{
			ft_segment_setBack(next, NULL);
			if (next->next == NULL)
				ll->Last = next;
		}
		else
			ll->Last = NULL;
		if (alsofreedata)
			ft_segment_free(&ll->First, alsofreedata);
		ll->First = next;
		ll->Count--;
	}
}
