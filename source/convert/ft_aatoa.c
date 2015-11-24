#include "../../includes/libft.h"

static size_t	ft_calcullen(char **ar)
{
	size_t		nb;
	size_t		total;

	total = 0;
	if (ar && *ar)
	{
		nb = 0;
		while (ar[nb])
		{
			total = total + ft_strlen(ar[nb]);
			++nb;
		}
	}
	return (nb);
}

char 			*ft_aatoa(char **ar)
{
	size_t	 	n;
	char 		*ret;

	n = 0;
	if (ar && *ar && (ret = ft_strnew(ft_calcullen(ar))) != NULL)
	{
		while (ar[n])
		{
			ret = ft_strcat(ret, ar[n]);
			++n;
		}
	}
	else
		ret = ft_strnew(0);
	return (ret);
}