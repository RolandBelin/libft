#include "../../includes/libft.h"

void		ft_linkedlist_expendFirst(t_linkedlist *ll, size_t n)
{
	if (ll == NULL)
		return;
	while(n > 0)
	{
		ft_linkedlist_addFirst(ll, NULL);
		--n;
	}
}
