#include "../../includes/libft.h"

void			ft_linkedlist_free(t_linkedlist **ll, bool alsodata)
{
	if (ll == NULL || *ll == NULL)
		return;
	if (ft_linkedlist_isEmpty(*ll) != false)
	{
		ft_linkedlist_removeAll(*ll, alsodata);
		(*ll)->Count = 0;
		(*ll)->Last = NULL;
		(*ll)->First = NULL;
	}
	free (*ll);
	*ll = NULL;
	ll = NULL;
}