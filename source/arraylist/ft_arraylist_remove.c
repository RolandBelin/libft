/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist_remove.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:03:46 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 23:28:11 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

bool		ft_arraylist_remove(t_arraylist *al, size_t index, bool alsofree)
{
	size_t	i;

	if (!al || (ft_arraylist_containindex(al, index)) == FALSE)
		return (FALSE);
	i = ft_array_size(al->array);
	if (alsofree == TRUE)
		free(al->array[index]);
	while (index++ < (i - 1))
		al->array[index] = al->array[index];
	al->array[index] = NULL;
	al->Count--;
	return (TRUE);
}
