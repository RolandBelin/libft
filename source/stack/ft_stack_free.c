#include "../../includes/libft.h"

void		ft_stack_free(t_stack **s, bool alsodata)
{
	ft_arraylist_free(s, alsodata);
}