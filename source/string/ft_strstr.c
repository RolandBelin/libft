#include "../../includes/libft.h"

char		*ft_strstr(const char *s1, const char *s2)
{
	size_t	i;
	size_t	size_s2;

	i = 0;
	if (s1 && s2)
	{
		size_s2 = ft_strlen(s2);
		while (s1[i])
		{
			if (ft_strncmp(s1 + i, s2, size_s2) == 0)
				return ((char *)s1 + i);
			++i;
		}
		if (size_s2 == 0)
			return ((char *)s1 + i);
	}	
	return (NULL);
}
