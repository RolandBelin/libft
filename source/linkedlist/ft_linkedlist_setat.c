/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linkedlist_setAt.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:06:38 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 19:37:33 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_linkedlist_setat(t_linkedlist *ll, void *data, size_t index)
{
	if (ll == NULL && ((ll = ft_linkedlist_new()) == NULL))
		return ;
	if (!ft_linkedlist_containindex(ll, index))
		ft_linkedlist_expendlast(ll, (index + 1) - ll->Count);
	ft_segment_setdata(ft_linkedlist_getsegat(ll, index), data);
}
