/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist_free.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:03:27 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 19:46:30 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void			ft_arraylist_free(t_arraylist **al, bool alsodata)
{
	if (!al || !*al)
		return ;
	if ((*al)->array)
		ft_array_free(&(*al)->array, alsodata);
	(*al)->Count = 0;
	(*al)->Capacity = 0;
	free(*al);
	*al = NULL;
	al = NULL;
}
