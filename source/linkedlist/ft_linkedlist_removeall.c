/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linkedlist_removeAll.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:06:24 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 18:58:05 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void			ft_linkedlist_removeall(t_linkedlist *ll, bool alsofree)
{
	if (!ft_linkedlist_isempty(ll))
	{
		while (ll->First)
			ft_linkedlist_removelast(ll, alsofree);
	}
}
