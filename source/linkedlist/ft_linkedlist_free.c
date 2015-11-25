/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linkedlist_free.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:06:08 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 23:05:06 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void			ft_linkedlist_free(t_linkedlist **ll, bool alsodata)
{
	if (ll == NULL || *ll == NULL)
		return ;
	if (ft_linkedlist_isempty(*ll) != FALSE)
	{
		ft_linkedlist_removeall(*ll, alsodata);
		(*ll)->Count = 0;
		(*ll)->Last = NULL;
		(*ll)->First = NULL;
	}
	free(*ll);
	*ll = NULL;
	ll = NULL;
}
