/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist_trimtosize.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:03:56 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 22:49:36 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void		ft_arraylist_trimtosize(t_arraylist *al)
{
	if (al == NULL || (al->Capacity > al->Count))
		return ;
	if ((ft_array_resize(&al->array, al->Count)) == TRUE)
		al->Capacity = al->Count;
}
