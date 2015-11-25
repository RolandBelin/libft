/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist_isEmpty.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:03:36 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 22:49:00 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

bool	ft_arraylist_isempty(t_arraylist *al)
{
	if (al == NULL)
		return (TRUE);
	else if (al->Count == 0)
		return (TRUE);
	else
		return (FALSE);
}
