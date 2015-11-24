#include "../../includes/libft.h"

char		*ft_strcat(char *dst, const char *src)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = ft_strlen(dst);
	while (src[j])
	{
		dst[i + j] = src[j];
		++j;
	}
	dst[i + j] = '\0';
	return (dst);
}
