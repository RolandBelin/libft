#include "../../includes/libft.h"

char		*ft_strsub(const char *str, unsigned int start, size_t len)
{
	char	*sub;

	if (!str)
		return (NULL);
	sub = ft_strnew(len);
	sub = ft_strncpy(sub, str + start, len);
	return (sub);
}
