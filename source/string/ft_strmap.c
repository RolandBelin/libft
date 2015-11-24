#include "../../includes/libft.h"

char		*ft_strmap(const char *s, char (*f)(char))
{
	char	*dup;
	size_t	i;

	i = 0;
	if (s && f)
	{
		dup = ft_strnew(ft_strlen(s));
		while (s[i])
		{
			dup[i] = (*f)(s[i]);
			++i;
		}	
	}
	return (dup);
}
