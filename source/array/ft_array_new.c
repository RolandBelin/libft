#include "../../includes/libft.h"

void 		**ft_array_new(size_t n)
{
	void 	**ar;
	size_t 	i;

	i = 0;
	ar = NULL;
	if ((ar = (void **)malloc(sizeof(void *) * n + 1)) != NULL)
	{
		while (i <= n)
			ar[i++] = (void *)NULL;
	}
	return (ar);
}