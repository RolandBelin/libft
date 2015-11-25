/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bufferseg_canAddchr.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:01:27 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 22:52:03 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

bool	ft_bufferseg_canaddchr(t_bufferseg *bs)
{
	if (bs != NULL && bs->len < 32)
		return (TRUE);
	return (FALSE);
}
