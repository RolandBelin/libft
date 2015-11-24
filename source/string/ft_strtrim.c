#include "../../includes/libft.h"

char		*ft_strtrim(const char *s)
{
	size_t	len;

	if (s)
	{
		while (*s && (*s == '\t' || *s == '\n' || *s == ' '))
			++s;
		if (*s)
		{
			len = ft_strlen(s) - 1;
			while ((s[len] == ' ' || s[len] == '\t' || s[len] == '\n') && len)
				--len;
			return (ft_strsub(s, 0, len + 1));
		}
	}
	return (ft_strdup(""));
}
