#include "../../includes/libft.h"

t_stack		*ft_stack_new(void)
{
	return ((t_stack *)ft_arraylist_new());
}