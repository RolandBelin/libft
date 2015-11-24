#include "../../includes/libft.h"

bool 		ft_strstartstr(const char *str, const char *start)
{
	size_t	i;

	i = 0;
	if ((!str && !start) || (!*str && !*start))
		return (true);
	else if ((!str || !start) || (!*str || !*start))
		return (false);
	while (str[i] && start[i] && str[i] == start[i])
		++i;
	if (start[i] == '\0')
		return (true);
	else
		return (false);
}