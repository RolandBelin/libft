#include "../../includes/libft.h"

int		ft_isprint(int c)
{
	if ((ft_isgraph(c) || c == ' ') && c > 0)
		return (16384);
	else
		return (0);
}
