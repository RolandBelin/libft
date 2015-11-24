#include "../../includes/libft.h"

char			*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char		*dup;
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		dup = ft_strnew(ft_strlen(s));
		while (s[i])
		{
			dup[i] = (*f)(i, s[i]);
			++i;
		}	
	}
	return (dup);
}
