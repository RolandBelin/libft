#include "../../includes/libft.h"

char		*ft_strtolower(char *str)
{
	size_t	i;

	if (str && *str)
	{
		i = 0;
		while (str[i])
		{
			str[i] = ft_tolower(str[i]);
			++i;
		}
	}
	return (str);
}