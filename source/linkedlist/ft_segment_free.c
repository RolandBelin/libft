#include "../../includes/libft.h"

void	 		ft_segment_free(t_segment **seg, bool alsodata)
{
	if (seg != NULL)
	{
		if (*seg != NULL)
		{
			(*seg)->next = NULL;
			(*seg)->back = NULL;
			if (alsodata == true && (*seg)->data != NULL)
					free((*seg)->data);
			(*seg)->data = NULL;
			free(*seg);
		}
		*seg = NULL;
	}
	seg = NULL;
}