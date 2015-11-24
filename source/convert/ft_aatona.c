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

static bool		ft_myadd(char *ar, char *str, size_t len, size_t max)
{
	size_t 		a;

	a = 0;
	if (len > max)
	{
		a = ft_strlen(ar);
		a = a - (len - max);
		str = ft_strncat(str, ar, a);
		return (false);
	}
	else
		str = ft_strcat(str, ar);
	return (true);
}

char 			*ft_aatona(char **ar, size_t max)
{
	size_t		len;
	size_t	 	n;
	char 		*ret;

	n = 0;
	len = ft_calcullen(ar);
	len = (len > max) ? max : len;
	if (ar && *ar && (ret = ft_strnew(len)) != NULL && max > 0)
	{
		len = 0;
		while (ar[n])
		{
			len = len + ft_strlen(ar[n]);
			if (!ft_myadd(ar[n], ret, len, max))
				break;
			++n;
		}
	}
	else
		ret = ft_strnew(0);
	return (ret);
}