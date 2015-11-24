#include "../../includes/libft.h"

bool 		ft_array_resize(void ***ar, size_t n)
{
	void	**nv;
	size_t 	i;
	size_t	j;

	nv = NULL;
	i = 0;
	j = ft_array_size(*ar);
	if (ar && *ar)
	{
		if ((nv = (void **)malloc(sizeof(void *) * (n + 1))) != NULL)
		{
			while (i < n)
			{
				if (i < j)
					nv[i] = (*ar)[i];
				else
					nv[i] = NULL;
				++i;
			}
			free(*ar);
			*ar = nv;
			return (true);
		}
	}
	return (false);
}