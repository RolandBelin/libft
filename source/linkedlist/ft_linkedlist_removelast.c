/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linkedlist_removeLast.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:06:34 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 23:05:58 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void			ft_linkedlist_removelast(t_linkedlist *ll, bool alsofreedata)
{
	t_segment	*back;

	back = NULL;
	if (!ft_linkedlist_isempty(ll))
	{
		back = ll->Last->back;
		if (back != NULL)
		{
			ft_segment_setnext(back, NULL);
			if (back->back == NULL)
				ll->First = back;
		}
		else
			ll->First = NULL;
		if (alsofreedata)
			ft_segment_free(&ll->Last, alsofreedata);
		ll->Last = back;
		ll->Count--;
	}
}
