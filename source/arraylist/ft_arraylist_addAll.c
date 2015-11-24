#include "../../includes/libft.h"

bool 			ft_arraylist_addAll(t_arraylist *al, void **datas)
{
	size_t		i;

	i = 0;
	if (datas)
	{
		while (datas[i])
		{
			if ((ft_arraylist_add(al, datas[i++])) == false)
				return (false);
		}
	}
	return (true);
}