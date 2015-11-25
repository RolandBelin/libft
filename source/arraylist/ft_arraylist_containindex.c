/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist_containIndex.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:03:16 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 22:48:29 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

bool		ft_arraylist_containindex(t_arraylist *al, size_t index)
{
	if (al && al->Count > index)
		return (TRUE);
	return (FALSE);
}
