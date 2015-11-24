#include "../../includes/libft.h"

void			*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*t;
	
	t = (unsigned char *)s;
	while (n > 0)
	{
		--n;
		t[n] = (unsigned char)c;
	}
	s = (void *)t;
	return (s);
}
