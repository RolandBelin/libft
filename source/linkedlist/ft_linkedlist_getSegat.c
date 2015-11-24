#include "../../includes/libft.h"

t_segment		*ft_linkedlist_getSegat(t_linkedlist *ll, size_t index)
{
	t_segment	*seg;
	t_segment	*temp;
	size_t		i;

	i = 0;
	if (!ft_linkedlist_isEmpty(ll) && ft_linkedlist_containIndex(ll, index))
	{
		temp = (t_segment *)ll->First;
		while (i < index)
		{
			seg = (t_segment *)temp->next;
			temp = (t_segment *)seg;
			++i;
		}
		return (temp);
	}
	return (NULL);
}