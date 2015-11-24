#include "../../includes/libft.h"

static size_t		ft_strsplit_listlen(const char *s, char c)
{
	unsigned int	inner;
	unsigned int	i;
	size_t			len;

	inner = 0;
	i = 0;
	len = 0;
	if (s)
	{
		while (s[i])
		{
			if (s[i] == c)
				inner = 0;
			if (s[i] != c && inner == 0)
			{
				inner = 1;
				++len;
			}
			++i;
		}
	}
	return (len);
}

static size_t	ft_len(const char *s, char c)
{
	size_t		len;

	len = 0;
	while (s[len] != c && s[len])
		++len;
	return (len);
}

char			**ft_strsplit(const char *s, char c)
{
	char		**list;
	size_t		len;
	int		i;

	i = 0;
	len = ft_strsplit_listlen(s, c);
	list = (char **)malloc(sizeof(char *) * (len + 1));
	if (list && len)
	{
		while (len)
		{
			--len;
			while (*s == c && *s)
				++s;
			list[i] = ft_strsub(s, 0, ft_len(s, c));
			if (!list[i])
				return (NULL);
			s = s + ft_len(s, c);
			++i;
		}
		list[i] = NULL;
	}
	return (list);
}
