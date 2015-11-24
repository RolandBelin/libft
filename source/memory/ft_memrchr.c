#include "../../includes/libft.h"

void			*ft_memrchr(const void *s, int c, size_t n)
{
	unsigned char	*t;
	
	t = (unsigned char *)s;
	while (n > 0)
	{
		--n;
		if (t[n] == c)
			return ((void *)s + n);
	}
	return (NULL);
}
