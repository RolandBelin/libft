/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linkedlist_containIndex.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:05:57 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 23:04:50 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

bool	ft_linkedlist_containindex(t_linkedlist *ll, size_t index)
{
	if (ft_linkedlist_isempty(ll))
		return (FALSE);
	else if (ll->Count - 1 < index)
		return (FALSE);
	return (TRUE);
}
