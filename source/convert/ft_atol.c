#include "../../includes/libft.h"

long		ft_atol(const char *nptr)
{
	long	nbr;
	long	sign;

	sign = 1;
	nbr = 0;
	while (ft_isspace(*nptr))
		++nptr;
	if (*nptr == '-')
		sign = -1;
	if (*nptr == '+' || *nptr == '-')
		++nptr;
	while (ft_isdigit(*nptr))
	{
		nbr = nbr * 10 + (*nptr - 48);
		++nptr;
	}
	return (nbr * sign);
}
