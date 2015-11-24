#include "../../includes/libft.h"

int		ft_iscntrl(int c)
{
	if ((ft_isspace(c) && c != ' ') || c == 7 || c == 8)
		return (1);
	else
		return (0);
}
