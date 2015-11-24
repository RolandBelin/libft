#include "../../includes/libft.h"

char		*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	size_t	s_s1;
	size_t 	s_s2;

	if (!s1 && !s2)
		return (NULL);
	else if (!s1)
		return (ft_strdup(s2));
	else if (!s2)
		return (ft_strdup(s1));
	s_s1 = ft_strlen(s1);
	s_s2 = ft_strlen(s2);
	str = ft_strnew(s_s1 + s_s2);
	str = ft_strcpy(str, s1);
	str = ft_strcat(str, s2);
	return (str);
}
