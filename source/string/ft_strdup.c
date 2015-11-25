/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:09:20 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 23:12:04 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

INT8		*ft_strdup(const INT8 *s)
{
	INT8	*str;
	size_t	i;

	i = 0;
	str = ft_strnew(i);
	while (i > 0)
	{
		--i;
		str[i] = s[i];
	}
	return (str);
}
