#include "../../includes/libft.h"

void 				**ft_array_dup(void **ar)
{
	void 			**dup;
	size_t			sar;
	size_t			i;

	i = 0;
	dup = NULL;
	sar = 0;
	if (ar && (dup = (void **)malloc(sizeof(void *) * (sar + 1))) != NULL)
	{
		sar = ft_array_size(ar);
		while (i < sar)
		{
			dup[i] = ar[i];
			++i;
		}
		dup[i] = NULL;
	}
	return (dup);
}
