#include "../../includes/libft.h"

void		ft_array_free(void ***ar, bool alsodata)
{
	int		m;

	if (ar && *ar)
	{
		m = ft_array_size(*ar);
		while (--m >= 0)
		{
			if ((*ar)[m] && alsodata)
				free((*ar)[m]);
			(*ar)[m] = NULL;
		}
		free(*ar);
		*ar = NULL;
		ar = NULL;
	}
}