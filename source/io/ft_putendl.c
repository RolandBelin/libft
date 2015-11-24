#include "../../includes/libft.h"

void		ft_putendl(const char *str)
{
	if (str)
	{
		write(1, str, ft_strlen(str));
		write(1, "\n", 1);
	}
}
