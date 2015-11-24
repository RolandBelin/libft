#include "../../includes/libft.h"

void		ft_putendl_fd(const char *str, int fd)
{
	if (str)
	{
		write(fd, str, ft_strlen(str));
		write(fd, "\n", 1);
	}
}
