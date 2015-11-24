#include "../../includes/libft.h"

int		ft_isgraph(int c)
{
	if ((ft_isalnum(c) || ft_ispunct(c)) && c != 262 && c != 266 && c != 272 && c != 274 && c != 280 && c != 286 && c != 290 && c != 296)
		return (32768);
	else
		return (0);
}
