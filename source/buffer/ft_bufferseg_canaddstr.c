/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bufferseg_canAddstr.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:01:32 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 22:52:13 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

bool				ft_bufferseg_canaddstr(t_bufferseg *bs, char *str)
{
	if ((bs != NULL && (str && *str)) && (ft_strlen(str) + bs->len < 32))
		return (TRUE);
	return (FALSE);
}
