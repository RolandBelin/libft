#include "../../includes/libft.h"

void			*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*s;

	if (dst && src)
	{
		s = (unsigned char *)malloc(sizeof(unsigned char) * n);
		ft_memcpy(s, src, n);
		ft_memcpy(dst, s, n);
		free(s);
		return (dst);
	}
	else
		return (NULL);
}
