#include "../../includes/libft.h"

char		*ft_strnew(size_t n)
{
	char	*str;
	
	str = (char *)malloc(sizeof(char) * (n + 1));
	str[n] = '\0';
	while (n > 0)
	{
		--n;
		str[n] = '\0';
	}
	return (str);
}
