/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:04:59 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 22:59:11 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

INT32		ft_tolower(INT32 c)
{
	if (c >= 'A' && c <= 'Z')
		return ((UINT8)c + 32);
	else if (c >= -128 && c <= 128 && c != -1)
		return ((UINT8)c);
	else
		return (c);
}
