#include "../../includes/libft.h"

int		ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c) || c == 262 || c == 266 || c == 272 ||  c == 274 || c == 280 || c == 286 || c == 290)
		return (8);
	else
		return (0);
}
