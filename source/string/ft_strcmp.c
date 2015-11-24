#include "../../includes/libft.h"

size_t		ft_strcmp(const char *s1, const char *s2)
{
	size_t	n;

	n = 0;
	while (s1[n] && s2[n] && s1[n] == s2[n])
		++n;
	return ((unsigned char)s1[n] - (unsigned char)s2[n]);
}
