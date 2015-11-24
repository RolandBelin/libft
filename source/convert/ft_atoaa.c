#include "../../includes/libft.h"

static size_t	ft_atoaa_size(const char *str, size_t cut, size_t slen)
{
	size_t 		nb;

	nb = 0;
	if (str && *str)
	{
		nb = 1;
		while ((int)slen - (int)cut > 0)
		{
			slen = slen - cut;
			++nb;
		}
	}
	return (nb);
}

static char		*ft_mysub(const char *str, size_t cut, size_t nb, size_t slen)
{
	size_t 		start;
	size_t 		len;

	start = cut * nb;
	len = (slen - start >= cut ? cut : (slen - start));
	return (ft_strsub(str, start, len));
}

char			**ft_atoaa(const char *str, size_t cut)
{
	char 		**ret;
	size_t		total;
	size_t 		nb;
	size_t 		slen;
	
	nb = 0;
	ret = NULL;
	if (str != NULL && cut > 0)
	{
		slen = ft_strlen(str);
		total = ft_atoaa_size(str, cut, slen);
		if ((ret = (char **)ft_array_new(total)) != NULL)
		{
			ret = (char **)ft_array_new(total);
			while(nb < total)
			{
				ret[nb] = ft_mysub(str, cut, nb, slen);
				++nb;
			}
		}
	}
	return (ret);
}