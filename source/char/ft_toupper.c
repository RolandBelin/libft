#include "../../includes/libft.h"

int		ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return ((unsigned char)c - 32);
	else if (c >= -128 && c <= 128 && c != -1)
		return ((unsigned char)c);
	else
		return (c);
}
