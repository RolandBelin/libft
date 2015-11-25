/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:10:03 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 23:14:30 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

INT8		*ft_strmapi(const INT8 *s, INT8 (*f)(UINT32, INT8))
{
	INT8	*dup;
	UINT32	i;

	i = 0;
	if (s && f)
	{
		dup = ft_strnew(ft_strlen(s));
		while (s[i])
		{
			dup[i] = (*f)(i, s[i]);
			++i;
		}
	}
	return (dup);
}
