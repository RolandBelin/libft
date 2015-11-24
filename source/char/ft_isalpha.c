#include "../../includes/libft.h"

int		ft_isalpha(int c)
{
	if (ft_islower(c) || ft_isupper(c))
		return (1024);
	else
		return (0);
}
