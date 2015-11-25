/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist_add.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:03:03 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 23:28:40 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

bool		ft_arraylist_add(t_arraylist *al, void *data)
{
	if ((ft_arraylist_ensurecapacity(al, al->Count + 1)) == FALSE)
		return (FALSE);
	al->array[al->Count++] = data;
	return (TRUE);
}
