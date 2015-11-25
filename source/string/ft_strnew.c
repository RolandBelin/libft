/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:10:24 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 23:16:16 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

INT8		*ft_strnew(size_t n)
{
	INT8	*str;

	str = (INT8 *)malloc(sizeof(INT8) * (n + 1));
	str[n] = '\0';
	while (n > 0)
	{
		--n;
		str[n] = '\0';
	}
	return (str);
}
