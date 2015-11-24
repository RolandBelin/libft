#include "../../includes/libft.h"

void			*ft_memalloc(size_t n)
{
	void		*b;

	b = (void *)malloc(n);
	ft_bzero(b, n);
	return (b);
}
