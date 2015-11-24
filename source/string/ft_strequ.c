#include "../../includes/libft.h"

int		ft_strequ(const char *s1, const char *s2)
{
	if (s1 && s2)
	{
		if (ft_strcmp(s1, s2) == 0)
			return (1);
		else
			return (0);
	}
	else if (s1 == s2)
		return (1);
	return (0);
}
