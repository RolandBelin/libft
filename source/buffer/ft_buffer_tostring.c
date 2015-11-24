#include "../../includes/libft.h"

void 				ft_myfree(char ***tab)
{
	size_t			i;

	i = 0;
	while (tab[0][i])
	{
		free(tab[0][i]);
		tab[0][i] = NULL;
		++i;
	}
	free(tab[0]);
	tab[0] = NULL;
	tab = NULL;
}

char 				*ft_buffer_tostring(t_buffer *b)
{
	char 	**tab;
	char 	*ret;

	tab = NULL;
	ret = NULL;
	if (!ft_arraylist_isEmpty(b))
	{
		tab = ft_buffer_toarray(b);
		ret = ft_aatoa(tab);
		ft_myfree(&tab);
		return (ret);
	}
	else
		return (ft_strnew(0));
}