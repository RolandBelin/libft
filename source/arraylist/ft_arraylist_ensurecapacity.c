/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist_ensureCapacity.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:03:23 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 22:48:46 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

bool		ft_arraylist_ensurecapacity(t_arraylist *al, size_t min)
{
	if (al->Capacity > min)
		return (TRUE);
	else if (ft_array_resize(&al->array, (((al->Capacity * 3) / 2) + 1)))
	{
		al->Capacity = (((al->Capacity * 3) / 2) + 1);
		return (TRUE);
	}
	else
		return (FALSE);
}
