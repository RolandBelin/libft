/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linkedlist_addfirst.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:05:46 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 23:30:10 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void			ft_linkedlist_addfirst(t_linkedlist *ll, void *data)
{
	t_segment	*seg;
	t_segment	*old_first;

	old_first = NULL;
	if ((ll != NULL) && ((seg = ft_segment_new()) != NULL))
	{
		old_first = ll->First;
		ft_segment_setdata(seg, data);
		ft_segment_setnext(seg, old_first);
		if (ll->Last == NULL)
			ll->Last = seg;
		if (old_first != NULL)
			ft_segment_setback(old_first, seg);
		ll->First = seg;
		ll->Count++;
	}
}
