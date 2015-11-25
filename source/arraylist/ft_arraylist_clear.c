/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist_clear.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:03:14 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 18:03:14 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

size_t			ft_arraylist_clear(t_arraylist *al, bool alsodata)
{
	void		**data;
	size_t		size;

	data = al->array;
	size = 0;
	if (al != NULL && (size = al->Count) != 0)
		ft_array_free(&data, alsodata);
	al->Count = 0;
	return (size);
}
