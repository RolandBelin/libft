#include "../../includes/libft.h"

char		*ft_strtoupper(char *str)
{
	size_t	i;

	if (str && *str)
	{
		i = 0;
		while (str[i])
		{
			str[i] = ft_toupper(str[i]);
			++i;
		}
	}
	return (str);
}