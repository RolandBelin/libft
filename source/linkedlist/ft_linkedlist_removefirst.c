/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linkedlist_removeFirst.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:06:30 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 18:58:55 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void			ft_linkedlist_removefirst(t_linkedlist *ll, bool alsofreedata)
{
	t_segment	*next;

	next = NULL;
	if (!ft_linkedlist_isempty(ll))
	{
		next = ll->First->next;
		if (next != NULL)
		{
			ft_segment_setback(next, NULL);
			if (next->next == NULL)
				ll->Last = next;
		}
		else
			ll->Last = NULL;
		if (alsofreedata)
			ft_segment_free(&ll->First, alsofreedata);
		ll->First = next;
		ll->Count--;
	}
}
