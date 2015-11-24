#include "../../includes/libft.h"

bool ft_linkedlist_isEmpty(t_linkedlist *ll)
{
	if (ll == NULL || ll->Count == 0)
		return (true);
	return (false);
}