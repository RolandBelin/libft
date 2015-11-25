/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist_addAll.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:03:10 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 22:48:19 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

bool		ft_arraylist_addall(t_arraylist *al, void **datas)
{
	size_t	i;

	i = 0;
	if (datas)
	{
		while (datas[i])
		{
			if ((ft_arraylist_add(al, datas[i++])) == FALSE)
				return (FALSE);
		}
	}
	return (TRUE);
}
