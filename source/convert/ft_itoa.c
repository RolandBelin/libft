#include "../../includes/libft.h"

static size_t	ft_itoa_intlen(long nbr)
{
	size_t	len;
	
	len = 1;
	if (nbr < 0)
	{
		nbr = -nbr;
		++len;
	}
	while (nbr > 10)
	{
		nbr = nbr / 10;
		++len;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	char	*ret;
	size_t	len;
	long 	nbr;

	nbr = n;
	len = ft_itoa_intlen(nbr);
	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (ret)
	{
		ret[len] = '\0';
		if (nbr < 0)
			nbr = -nbr;
		while (len)
		{
			--len;
			ret[len] = 48 + nbr - ((nbr/10) * 10);
			nbr = nbr / 10;
		}
		if (ret[0] == '0' && ret[1] != '\0')
			ret[0] = '-';
	}
	return (ret);
}