#include "../../includes/libft.h"

int		ft_isxdigit(int c)
{
	if ((c >= 'A' && c <= 'F') || (c >= 'a' && c <= 'f') || ft_isdigit(c))
		return (4096);
	else
		return (0);
}
