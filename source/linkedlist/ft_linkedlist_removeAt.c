#include "../../includes/libft.h"

void			ft_linkedlist_removeAt(t_linkedlist *ll, size_t index, bool b)
{
	t_segment	*removed;

	if (ft_linkedlist_containIndex(ll, index))
	{
		if ((removed = ft_linkedlist_getSegat(ll, index)) != NULL)
		{
			if (removed->next == NULL)
				ft_linkedlist_removeLast(ll, b);
			else if (removed->back == NULL)
				ft_linkedlist_removeFirst(ll, b);
			else
			{
				ft_segment_setNext(removed->back, removed->next);
				ft_segment_setBack(removed->next, removed->back);
				ft_segment_free(&removed, b);
				ll->Count--;
				removed = NULL;
			}
		}
	}
}