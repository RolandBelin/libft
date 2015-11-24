#include "../../includes/libft.h"

void				*ft_segment_getDupdata(t_segment *seg)
{
	size_t			len;
	unsigned char	*dest;
	unsigned char	*src;

	dest = NULL;
	src = NULL;
	len = 0;
	if ((src = (unsigned char *)ft_segment_getData(seg)) != NULL)
	{
		while(src[len] != '\0')
			++len;
		if ((dest = (unsigned char *)malloc(sizeof(unsigned char) * (len + 1))))
		{
			len = 0;
			while(src[len] != '\0')
			{
				dest[len] = src[len];
				++len;
			}
			dest[len] = '\0';
		}
	}
	return (dest);
}