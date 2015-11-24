#include "../../includes/libft.h"

char		*ft_strdup(const char *s)
{
	char	*str;
	size_t	i;

	i = 0;
	str = ft_strnew(i);
	while (i > 0)
	{
		--i;
		str[i] = s[i];
	}
	return (str);
}
